import java.io.*;
import java.util.Scanner;
import Ice.*;
import Mp3Player.*;
public class Client {
	
	public static void printListFile(Mp3Player.ManagePrx manageInterface){
		String listFile[] = manageInterface.getFilesList();
		int i = 0;
		for(i=0 ; i < listFile.length; i++){
			System.out.println(listFile[i]);
		}
		if(i == 0){
			System.out.println("Aucun fichier n'est présent.");
		}
	}
	
	public static void printListFileWithName(Mp3Player.ManagePrx manageInterface){
		Scanner sc = new Scanner(System.in);
		System.out.println("Nom du fichier : ");
		String name = sc.nextLine();
		String fileList[] = manageInterface.findByName(name);
		int i = 0;
		for(i = 0;i < fileList.length;i++){
			System.out.println(fileList[i]);
		}
		System.out.println("Le(s) fichiers n'ont pas été trouver");
	}
	
	public static void addFile(Mp3Player.ManagePrx manageInterface){
		String path;
		String name;
		Scanner sc = new Scanner(System.in);
		System.out.println("Chemin du fichier : ");
		path = sc.nextLine();
		System.out.println("Nom du fichier : ");
		name = sc.nextLine();
		path = path + name;
		try {
			File file = new File(path);
			FileInputStream is = new FileInputStream(file);
			byte[] chunk = new byte[1024 * 250];
			int chunkLen = 0;
			int offset = 0;
			while (is.read(chunk) != -1) {
				manageInterface.addFile(name, offset, chunk, is.read(chunk));
				offset += chunkLen;
			}
		} catch (FileNotFoundException fileException) {
			fileException.printStackTrace();
		} catch (IOException ioException) {
			ioException.printStackTrace();        
		}
	}
	
	public static void removeFile(Mp3Player.ManagePrx manageInterface){
		String name ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Entrez le nom du fichier : ");
		name = sc.nextLine();
		manageInterface.removeFile(name);
	}
	
	public static void userIO(Mp3Player.ManagePrx manageInterface){
		String input = "0";
		Scanner sc = new Scanner(System.in);
		while(!input.equals("5")){
			System.out.println("Que souhaitez-vous faire ?");
			System.out.println("1: Lister les fichiers disponible");
			System.out.println("2: Chercher des fichiers");
			System.out.println("3: Ajouter un fichier");
			System.out.println("4: Supprimer un fichier");
			System.out.println("5: Quitter");
			input = sc.nextLine();
			switch (input){
				case "1":
					printListFile(manageInterface);
				break;
				case "2":
					printListFileWithName(manageInterface);
				break; 
				case "3":
					addFile(manageInterface);
				break; 
				case "4":
					removeFile(manageInterface);
				break; 
				case "5":
					System.out.println("Au revoir");
				break;         
				default:
					System.out.println("Veuillez choisir une option valide");
			}
		} 
	}
		
    public static void main(String[] args){
        int status = 0;
        Ice.Communicator ic = null; 
        try {
            ic = Ice.Util.initialize(args);
            Ice.ObjectPrx base = ic.stringToProxy("Mp3Player:default -p 10000");
            Mp3Player.ManagePrx manageInterface = Mp3Player.ManagePrxHelper.checkedCast(base);
            if (manageInterface == null)
                throw new Error("Invalid proxy");
 
 		userIO(manageInterface);
        } catch (Ice.LocalException e) {
            e.printStackTrace();
            status = 1;
        } catch (Ice.Exception e) {
            System.err.println(e.getMessage());
            status = 1;
        }
        if (ic != null) {
            try {
                ic.destroy();
	        } catch (Ice.Exception e) {
                System.err.println(e.getMessage());
                status = 1;
            }
        }
        System.exit(status);
    }
}

