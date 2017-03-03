#ifndef SERVER_H
#define SERVER_H

#include <Ice/Ice.h>
#include <Mp3Player.h>
#include <iostream>
#include <string>
#include <memory>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <pthread.h>

using namespace std;
using namespace Mp3Player;


class Mp3PlayerI : public Manage  {
  public:
    void addFile(const string& name, Ice::Int offset, const byteArray &bytes, Ice::Int size, const Ice::Current &){
		string path = "Musiques/"+name;
		ofstream file (path.c_str(), ios::out | ios::app | ios::binary);
		file.seekp(offset, ios::beg);
		file.write((char*)(&bytes[0]), size);
		file.close();
	}
	
	void removeFile(const string& name, const Ice::Current &){
		system(("rm ./Musiques/"+name).c_str());
	}

	stringArray getFilesList(const Ice::Current &){
		struct dirent *fileList;
		DIR *dir;
		dir = opendir("./Musiques" );
		vector<string> fileVector;
		while ((fileList = readdir(dir))) {
			string fileName = fileList->d_name;
			if (!(fileName == "." || fileName == ".."))fileVector.push_back(fileName);
			
		}
		closedir(dir);
		
		return fileVector;
	}

	stringArray findByName(const string& name, const Ice::Current &){
		struct dirent *fileList;
		DIR *dir;
		dir = opendir("./Musiques" );
		vector<string> fileVector;
		while ((fileList = readdir(dir))) {
			string fileName = fileList->d_name;
			if (!(fileName == "." || fileName == ".." || fileName.find(name) == -1))fileVector.push_back(fileName);
		}
		closedir(dir);
		return fileVector;
	}
};

#endif
