#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<string.h>
using namespace std;

void words_with_A_to_E(char word[],int ch);
void words_with_F_to_J(char word[],int ch);
void words_with_K_to_O(char word[],int ch);
void words_with_P_to_T(char word[],int ch);
void words_with_U_to_Z(char word[],int ch);
int main()
{
	char word[50],first_let;
	int ch;
	cout<<"Do you wish to find or add a new word\n"<<"if adding enter:1\t to search enter 2\n";
	cout<<"Enter the choice\n";
	cin>>ch;
	cout<<"enter the word\n";
	cin>>word;
	first_let=word[0];
//	first_let=tolower(first_let);
	
	switch(first_let)
	{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':words_with_A_to_E(word,ch);
			break;
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':words_with_F_to_J(word,ch);
			break;
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':words_with_K_to_O(word,ch);
			break;
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':words_with_P_to_T(word,ch);
			break;
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'z':
		case 'y':words_with_U_to_Z(word,ch);
			break;
	}
}

//to use file from A to E

void words_with_A_to_E(char word[],int ch)
{
	//cout<<word<<endl;	
	int i=0,flg=0;
	ifstream infile;
	infile.open("AtoE.txt",ios::in);	
	char word_dict[50],meaning[100],ans[3],bug[20];
	map<string,string>hashtable;
	while(!infile.eof())
	{
		infile>>word_dict;
		infile.getline(meaning,100);
		//cout<<word_dict<<"\t"<<meaning<<endl;		
		hashtable.insert(std::pair<string,string>(word_dict,meaning));
		if(strcmp(word,word_dict)==0)
		{		
			flg=1;
			break;
		}			
	}
	if(flg==1)
	{
		cout<<"Meaning of the word "<<word<<" is"<<hashtable[word]<<endl;
		//flg=1;
	}
	if(flg==1 && ch==1)
	{
		cout<<"The word was already present\n";
		infile.close();
	}

	if(flg==0 || (ch==1 && flg==0))
	{
		cout<<"please enter the meaning of the"<< word<<"\t";
		cin.ignore(256, '\n');
		cin.getline(meaning,100);
	
	std::ofstream outfile;
	outfile.open("AtoE.txt",std::ios_base::app);
	outfile<<word<<"\t"<<meaning;
	outfile.close();
	}
}							

//to use file from F to J
void words_with_F_to_J(char word[],int ch)
{
	int i=0,flg=0;
	ifstream infile;
	char word_dict[50],meaning[100],ans[3],bug[20];
	infile.open("FtoJ.txt");
	map<string,string>hashtable;
	while(!infile.eof())
	{
		infile>>word_dict;
		infile.getline(meaning,100);
		//cout<<word_dict<<"\t"<<meaning<<endl;		
		hashtable.insert(std::pair<string,string>(word_dict,meaning));
		if(strcmp(word,word_dict)==0)
		{
			flg=1;		
			break;
		}		
	}
	if(flg==1)
	{
		cout<<"Meaning of the word "<<word<<" is"<<hashtable[word]<<endl;
		//flg=1;
	}
	if(flg==1 && ch==1)
	{
		cout<<"The word was already present\n";
		infile.close();
	}

	if(flg==0 || (ch==1 && flg==0))
	{
		cout<<"please enter the meaning of the"<< word<<"\t";
		cin.ignore(256, '\n');
		cin.getline(meaning,100);
	
	std::ofstream outfile;
	outfile.open("AtoE.txt",std::ios_base::app);
	outfile<<word<<"\t"<<meaning;
	outfile.close();
	}
}					
//to use file from K to O 
void words_with_K_to_O(char word[],int ch)
{
	int i=0,flg=0;
	ifstream infile;
	char word_dict[50],meaning[100],ans[3],bug[20];
	infile.open("KtoO.txt");
	map<string,string>hashtable;
	while(!infile.eof())
	{
		infile>>word_dict;
		infile.getline(meaning,100);
		//cout<<word_dict<<"\t"<<meaning<<endl;		
		hashtable.insert(std::pair<string,string>(word_dict,meaning));
		if(strcmp(word,word_dict)==0)
		{		
			flg=1;		
			break;
		}		

	}
	if(flg==1)
	{
		cout<<"Meaning of the word "<<word<<" is"<<hashtable[word]<<endl;
		//flg=1;
	}
	if(flg==1 && ch==1)
	{
		cout<<"The word was already present\n";
		infile.close();
	}

	if(flg==0 || (ch==1 && flg==0))
	{
		cout<<"please enter the meaning of the"<< word<<"\t";
		cin.ignore(256, '\n');
		cin.getline(meaning,100);
	
	std::ofstream outfile;
	outfile.open("AtoE.txt",std::ios_base::app);
	outfile<<word<<"\t"<<meaning;
	outfile.close();
	}
}					
//to use file from P to T
void words_with_P_to_T(char word[],int ch)
{
	int i=0,flg=0;
	ifstream infile;
	char word_dict[50],meaning[100],ans[3],bug[20];
	infile.open("PtoT.txt");
	map<string,string>hashtable;
	while(!infile.eof())
	{
		infile>>word_dict;
		infile.getline(meaning,100);
		//cout<<word_dict<<"\t"<<meaning<<endl;		
		hashtable.insert(std::pair<string,string>(word_dict,meaning));
		if(strcmp(word,word_dict)==0)
		{
			flg=1;		
			break;
		}	

	}
	if(flg==1)
	{
		cout<<"Meaning of the word "<<word<<" is"<<hashtable[word]<<endl;
		//flg=1;
	}
	if(flg==1 && ch==1)
	{
		cout<<"The word was already present\n";
		infile.close();
	}

	if(flg==0 || (ch==1 && flg==0))
	{
		cout<<"please enter the meaning of the"<< word<<"\t";
		cin.ignore(256, '\n');
		cin.getline(meaning,100);
	
	std::ofstream outfile;
	outfile.open("AtoE.txt",std::ios_base::app);
	outfile<<word<<"\t"<<meaning;
	outfile.close();
	}
}			

//to use the file from U to Z
void words_with_U_to_Z(char word[],int ch)
{
	int i=0,flg=0;
	ifstream infile;
	char word_dict[50],meaning[100],ans[3],bug[20];
	infile.open("UtoZ.txt");
	map<string,string>hashtable;
	while(!infile.eof())
	{
		infile>>word_dict;
		infile.getline(meaning,100);
		cout<<"\t"<<meaning<<endl;		
		hashtable.insert(std::pair<string,string>(word_dict,meaning));
		if(strcmp(word,word_dict)==0)
		{		
			flg=1;
			break;
		}		

	}
	if(flg==1)
	{
		cout<<"Meaning of the word "<<word<<" is"<<hashtable[word]<<endl;
		//flg=1;
	}
	if(flg==1 && ch==1)
	{
		cout<<"The word was already present\n";
		infile.close();
	}

	if(flg==0 || (ch==1 && flg ==0))
	{
		cout<<"please enter the meaning of the"<< word<<"\t";
		cin.ignore(256, '\n');
		cin.getline(meaning,100);
	
	std::ofstream outfile;
	outfile.open("AtoE.txt",std::ios_base::app);
	outfile<<word<<"\t"<<meaning;
	outfile.close();
	}
}							
		
							
