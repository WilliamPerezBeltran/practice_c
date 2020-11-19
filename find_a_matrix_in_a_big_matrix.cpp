// https://stackoverflow.com/questions/16750739/find-a-matrix-in-a-big-matrix

// https://stackoverflow.com/questions/10529278/fastest-way-to-find-a-m-x-n-submatrix-in-m-x-n-matrix



// I recommend doing an internet search on "2d pattern matching algorithms". You'll get plenty of results. I'll just link the first hit on Google, a paper that presents an algorithm for your problem.

// You can also take a look at the citations at the end of the paper to get an idea of other existing algorithms.

// "2d pattern matching algorithms"


[8:06 p. m., 18/11/2020] williampbeltran85: https://stackoverflow.com/questions/16750739/find-a-matrix-in-a-big-matrix
[8:06 p. m., 18/11/2020] williampbeltran85: https://stackoverflow.com/questions/10529278/fastest-way-to-find-a-m-x-n-submatrix-in-m-x-n-matrix
[8:07 p. m., 18/11/2020] williampbeltran85: https://stackoverflow.com/questions/10529278/fastest-way-to-find-a-m-x-n-submatrix-in-m-x-n-matrix
[8:07 p. m., 18/11/2020] williampbeltran85: I recommend doing an internet search on "2d pattern matching algorithms". You'll get plenty of results. I'll just link the first hit on Google, a paper that presents an algorithm for your problem.


#include <iostream>

using namespace std;

int main()
{
	int Ma[][5]= {
		{0, 0, 1, 0, 0},
		{0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0},
		{0, 1, 0, 0, 0},
		{1, 1, 1, 1, 0}
	};


	int Su[][3]= {
		{1, 0, 0},
		{1, 0, 0},


	};

    int S = 5;// Size of main matrix row
    int T = 5;//Size of main matrix column
    int M = 2; // size of desire matrix row
    int N = 3; // Size of desire matrix column

    int flag, i,j,p,q;
    for(i=0; i<=(S-M); i++)
    {
    	for(j=0; j<=(T-N); j++)
    	{
    		flag=0;
    		for(p=0; p<M; p++)
    		{
    			for(int q=0; q<N; q++)
    			{
    				if(Ma[i+p][j+q] != Su[p][q])
    				{
    					flag=1;

    					break;
    				}
    			}
    		}
    		if(flag==0)
    		{
    			printf("Match Found in the Main Matrix at starting location %d, %d",(i+1) ,(j+1));
    			break;
    		}
    	}
    	if(flag==0)
    	{
    		printf("Match Found in the Main Matrix at starting location %d, %d",(i+1) ,(j+1));
    		break;
    	}
    }

    return 0;
}
