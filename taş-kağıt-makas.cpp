#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	int user_score=0,computer_score=0,random,user_num_value;
	char user_name[20],choice[10];
	printf("Please enter your name: ");
	scanf("%s",&user_name);
	
	
	while(!(user_score == 3 || computer_score == 3)){
		srand(time(NULL)); // For generating different number
	    random = rand() % 3; // ai's choice
		printf("Please enter your choice: ");
		scanf("%s", &choice);
	    
	    if(!(strcmp(choice,"ROCK"))){
	    	user_num_value = 0;
		}
	    else if(strcmp(choice,"PAPER")==0){
	    	user_num_value = 1;
	  	}
	    else if(strcmp(choice,"SCISSORS")==0){
	    	user_num_value = 2;
		}
	    else{
	        user_num_value = -1;
		}
		
		while(user_num_value==-1){
			printf("ERROR!\n");
			
			printf("Please enter your choice correctly only upper-case allowed: ");
			scanf("%s", &choice);
		    
		    if(strcmp(choice,"ROCK") == 0){
		    	user_num_value = 0;
			}
		    else if(strcmp(choice,"PAPER") == 0){
		    	user_num_value = 1;
		  	}
		    else if(strcmp(choice,"SCISSORS") == 0){
		    	user_num_value = 2;
			}
		    else{
		        user_num_value==-1;
			}
		}
		 
	    switch(user_num_value){
	    	case 0:
	    		if(random == 0){
	    			printf("Draw!");
				}
				else if(random == 1){
					printf("Computer wins!");
					computer_score++;
				}
				else {
					printf("%s wins!",user_name);
					user_score++;
				}
	    		break;
		
	        case 1:
	    		if(random == 0){
	    			printf("%s wins!",user_name);
	    			user_score++;
				}
				else if(random == 1){
					printf("Draw !");
				}
				else {
					printf("Computer wins!");
					computer_score++;
				}
	    		break;
	        case 2:
	    		if(random == 0){
	    			printf("Computer wins!");
	    			computer_score++;
				}
				else if(random == 1){
					printf("%s wins!", user_name);
					user_score++;
				}
				else {
					printf("Draw!");
				}
	    		break;
	    }
    }
    printf("\n%d-%d \n",user_score, computer_score);
    
    if(computer_score>user_score){
    	printf("Computer win!");
	}
	else{
		printf("%s won!",user_name); 
    }
  return 0;
 }
