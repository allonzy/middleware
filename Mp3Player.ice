module Mp3Player {

	sequence<byte> byteArray;
	sequence<string> stringArray;
	
    interface Manage {
        void addFile(string name, int offset, byteArray bytes, int size); 
        void removeFile(string name);
        stringArray getFilesList();
        stringArray findByName(string name);
    };
};
