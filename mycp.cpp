int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	string afile = argv[1];
	string bfile = argv[2];
	int x=0;
	
	// check if there are enough arguments
	for(int i=0; i<argc; i++)
		x++;
	
	if(x<2){
		cout<<"NOT ENOUGH ARGUMENTS"<<endl;
		exit(0);
	}
		
	fin.open(afile);
	// open the first file
 	
	char c;

	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	
	fout.open(bfile);
	// open the second file
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
