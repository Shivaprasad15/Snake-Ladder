#include<stdio.h>
#include<stdlib.h>
int a[49]={42,43,44,45,46,47,48,41,40,39,38,37,36,35,28,29,30,31,32,33,34,27,26,25,24,23,22,21,14,15,16,17,18,19,20,13,12,11,10,9,8,7,0,1,2,3,4,5,6};
int b[49]={0,-16,4,0,0,-24,0,0,4,0,0,0,0,0,0,0,19,-14,0,15,0,-16,0,0,0,-24,0,0,-12,0,0,-14,0,0,0,0,0,19,0,0,0,0,0,-12,0,0,15,0,0},pos1=0,pos2=0;
void loop(){
    while(1){

    }
}
/*int ran(){
	return (rand()%6)+1;   //Random Function
}*/
void display(){
	int i;
	for(i=0;i<49;i++){
		if(i%7==0){
			printf("\n\n");    //Go to next line
		}
		if(a[pos2]==i&&a[pos1]==i)
            {
                printf("P1P2 %d\t",b[i]);
                continue;
            }
			if(a[pos1]==i){
				if(b[i]==0){
                        printf(" P1\t");     // P represents the player
				}
				else{
                    printf("P1 %d\t",b[i]);
				}
                    continue;
			}
			if(a[pos2]==i){
				if(b[i]==0){
                        printf(" P2\t");     // P represents the player
				}
				else{
                    printf("P2 %d\t",b[i]);
				}
				continue;

			}


			else if(b[i]!=0){
				printf("%d\t",b[i]);
			}
			else if(b[i]==0){
				printf("0\t");
			}
	}
}
int main(){
	int c,t,f=0;
	while(1){
            if(f%2==0){
	if(pos1<48){
		printf("\n");

		display();
		printf("\n\nEnter the Player 1 move : ");
		scanf("%d",&c);                                  //Read the dice value
		if((pos1+c)<=48){
			pos1+=c;
			if(pos1==4||pos1==11||pos1==14||pos1==31||pos1==40||pos1==43||pos1==47){
                switch(pos1)
                {
                    case 4: pos1=pos1+29;break;
                    case 11: pos1=pos1+19;break;         //+ve is Ladder and -ve is a Snake
                    case 14: pos1=pos1-12;break;
                    case 31: pos1=pos1-14;break;
                    case 40: pos1=pos1+4;break;
                    case 43: pos1=pos1-16;break;
                    case 47: pos1=pos1-24;break;
                    default : break;
                }
			}
		}

	}
	}
	else{
        if(pos2<48){
		printf("\n");

		display();
		printf("\n\nEnter the Player 2 move : ");
		scanf("%d",&c);                                  //Read the dice value
		if((pos2+c)<=48){
			pos2+=c;
			if(pos2==4||pos2==11||pos2==14||pos2==31||pos2==40||pos2==43||pos2==47){
                switch(pos2)
                {
                    case 4: pos2=pos2+29;break;
                    case 11: pos2=pos2+19;break;         //+ve is Ladder and -ve is a Snake
                    case 14: pos2=pos2-12;break;
                    case 31: pos2=pos2-14;break;
                    case 40: pos2=pos2+4;break;
                    case 43: pos2=pos2-16;break;
                    case 47: pos2=pos2-24;break;
                    default : break;
                }
			}
		}

	}
	}

	 if(pos1==48){

			printf("\n\n\a\a\aPlayer  1 won\n");          //Player reached the Home
			display();
			loop();
		}
		 if(pos2==48){

			printf("\n\n\a\a\aPlayer  2 won\n");          //Player reached the Home
			display();
			loop();
		}
f++;
}      //Outer while loop ends
}

