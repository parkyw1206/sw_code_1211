#include<iostream>

using namespace std;
int search(int ladder[102][102] , int target){
	int x = target;
    int y = 100;
    
    while(y != 1){
    	if(ladder[y][x-1] == 1){
        	while(ladder[y][x-1] != 0){
            	x--;
            }
            y--;
        }else if(ladder[y][x+1] == 1){
        	while(ladder[y][x+1] != 0){
            	x++;
            }
            y--;
        }else{
        	y--;
        }
    }	
    return x;
}
int main(int argc, char** argv)
{
	int test_case, T, lastIndex;
    int ladder[102][102];

	for(test_case = 1; test_case <= 10; ++test_case)
	{
		cin>>T;
    	for(int i = 0 ; i < 102; i++){
        	for(int j = 0 ; j < 102; j++){
                if(i == 0 || j == 0 || i == 101 || j == 101)
                    ladder[i][j] = 0;
                else
	            	cin >> ladder[i][j];
                if(ladder[i][j] == 2) 
                	lastIndex = j;
            }
        }  
        cout << "#" << T << " " << search(ladder,lastIndex)-1<< endl;
	}

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}