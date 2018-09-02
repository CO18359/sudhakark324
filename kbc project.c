#include<stdio.h>
int n;
char a[10];
void main()
{
    
	printf("\n welcome to kbc. enter your name to start ");
	scanf("%s",&a);
	printf("\n\nwelcome %s lets play kbc",a);
	
	
	printf("\n\nthis question is for Rs1000\n");
 ou:
  printf(" QUESTION 1. hich of the following gods is also known as ‘ Gauri Nandan ’?\n");
  printf("options are.\n1. Agni \n2. Ganesha \n3. Indra \n4. Hanuman\n\n");
  
  printf("enter the option :");
  scanf(" %d",&n);
 
		
  switch(n)
  {
  	case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 1000\n\n");
  		
  		break;
  	case 3:
  			printf("wrong");
  			goto gameover;
  		break;
  		case 4:
  				printf("wrong");
  				goto gameover;
  		break;
  		default:
  			printf("\nenter correct option");
	  		goto ou;
  }
	 printf("this question is for Rs2000\n");
  
  printf("your next question\n ");
  back:
  printf(" QUESTION 2. Which of these are names of national parks located in Madhya Pradesh?\n");
  printf(" options are. \n1. Krishna and Kanhaiya \n2. Ghanshyam and Murari \n3. Kanha and Madhav \n4. Girdhar and Gopal");
  printf("\n\n enter the option :");
  scanf(" %d",&n);
  switch(n)
  {
  	case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 2000");
  		break;
  	case 3:
  			printf("wrong");
  			goto gameover;
  		break;
  		case 4:
  				printf("wrong");
  				goto gameover;
  		break;
  		default:
  			printf("\nenter correct option");
  			goto back;
	  	
  }
  	printf("\n\nthis question is for Rs 3000\n");
  	printf("your next question\n ");
   o:
    printf(" QUESTION 3. Who wrote the introduction to the English translation of Rabindranath Tagore’s Gitanjali?\n ");
    printf("options are.\n1. P.B. Shelley \n2. T.S. Elliot \n3. W.B. Yeats \n4. Alfred Tennyson");
  
     printf("\n\n enter the option :");
     scanf(" %d",&n);
 
		
  switch(n)
  {
  	    case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	    case 2:
  		printf("wrong");
  		goto gameover;
  		
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 3000\n\n");
  			
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  		default:
  		printf("\nenter correct option");
	  	goto o;
  }
  printf("\n\nthis question is for Rs 5000\n");
	printf("your next question\n\n ");
	p:
	printf(" QUESTION 4 .Which of these terms can only be used for women?\n");
  printf(" options are. \n.1 Dirghaayu \n2. Chiranjeevi \n3. Suhagan \n4. Sushil?");
	
	printf("\n\nenter the option :");
  scanf(" %d",&n);
 
		
  switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 5000\n\n");
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  	    printf("enter correct option");
	  	goto p;
  }
   printf("\n\nthis question is for Rs 10000\n");
   	printf("your next question\n\n ");
   	pr:
   	printf(" QUESTION 5. Which of these sports requires you to shout out a word loudly during play?\n\n");
   	printf(" options are. \n1. Chess \n2. Ludo \n3. Playing cards \n4. Kho-kho");
	
	printf("\n\nenter the option :");
  scanf(" %d",&n);
  
   switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	    case 3:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  		case 4:
  		printf("right");
  		printf("\ncongrats you have won  Rs 10000\n\n");
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto pr;
  }
   printf("this question is for Rs20,000\n");
  printf("your next question\n\n ");
  ba:
  printf(" Question 6.Which is the only one of these creatures to not walk on four legs?\n");
  printf("options are. \n1. Giraffe \n2. ostrich \n3. Rhinoceros \n4. gorilla \n");
  printf("\n enter the option :");
  scanf(" %d",&n);
  switch(n)
  {
  	case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 20000");
  		break;
  	case 3:
  			printf("wrong");
  			goto gameover;
  	 	    break;
  	case 4:
  			printf("wrong");
  			goto gameover;
  		    break;
  	default:
  		    printf("\nenter correct option");
  			goto ba;
	  	
  }
   printf("this question is for Rs 40,000\n");
  printf("your next question\n ");
  ps:
  printf("Question 7.In the Mahabharata, who among these was the uncle of Ghototkach?\n");
  printf("Options are \n1. Barbarika \n2. Jarashandha \n3. Hidimb \n4. Shikhandi\n");
   printf("\nenter the option :");
  scanf(" %d",&n);
   switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 40000\n\n");
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto ps;
  }
   printf("this question is for Rs 80000\n");
  printf("your next question\n ");
  pb:
  printf("Question 8. Which of these places lies on the coast of the Arabian sea?\n");
  printf("Options are. \n1. Mahabalipuram \n2. Kovalam \n3. Paradip \n4. Sundarbans");
  printf("\n enter the option :");
  scanf(" %d",&n);
  switch(n)
  {
  	  case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	  case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 80000");
  		break;
  	   case 3:
  			printf("wrong");
  			goto gameover;
  		break;
  		case 4:
  			printf("wrong");
  			goto gameover;
  		break;
  		default:
  		printf("\nenter correct option");
	  	goto pb;
  }
 printf("this question is for Rs 160000\n");
   re:
  printf("your next question\n ");
  printf(" Question 10.Which of these screen legends was a chemistry lecturer before taking up acting?\n");
  printf("Options are.\n1. Shivaji Ganeshan \n2. Gemini Ganeshan \n3. N T Rama Rao \n4. Dr.Rajkumar");
   printf("\n enter the option :");
  scanf(" %d",&n);
  
   switch(n)
  {
  	case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 160000");
  		break;
  	case 3:
  	   printf("wrong");
  	   goto gameover;
  		break;
  	case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  		printf("\nenter correct option");
	  	goto re;
  }
    printf("this question is for Rs 3,20,,000\n\n");
   
  printf("your next question\n \n");
  kr:
  printf("Question 11.Which puranic character was the main protagonist of the novel Yugandhar by Shivaji Sawant?\n");
  printf("Options are.\n1. Rama \n2. Karna \n3. Krishna \n4. Bhisma\n\n");
  printf("\n\nenter the option :");
  scanf(" %d",&n);
   switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 320000\n\n");
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto kr;
  }
  printf("this question is for Rs 640000\n\n");
   printf("your next question\n \n");
   n:
   printf("Question 12. Which of these sports events is named after a place?\n");
  printf("Options are.\n1.  Tennis \n2. Soccer \n3. Marathon \n4. Squash\n\n");
  printf("\n\nenter the option :");
  scanf(" %d",&n);
    switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 640000\n\n");
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto n;
  }
 printf("this question is for Rs 1250000\n\n");
   printf("your next question\n \n");
   g:
   printf("Question 13. Which of these politicians has been the Presidents of the Indian National Congress for the longest period?\n");
  printf("Options are.\n1. Jawaharlal Nehru \n 2. Indira Gandhi \n3. Rajiv Gandhi \n4. Sonia Gandhi\n\n");
  printf("\n\nenter the option :");
  scanf(" %d",&n);
   switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	    case 3:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  		case 4:
  		printf("right");
  		printf("\ncongrats you have won  Rs 1250000\n\n");
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto g;
  }
  printf("this question is for Rs 5000000\n\n");
   printf("your next question\n \n");
   w:
   printf("Question 14.In 1846, what was bought by Gulab Singh from the British for Rs 75 lakhs?\n");
  printf("Options are.\n1. Simla 2.\n Kumaon \n3. Kashmir \n4. Garhwal\n\n");
  printf("\n\nenter the option :");
  scanf(" %d",&n);
   switch(n)
  {
  	   case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  		
  	   case 2:
  		printf("wrong");
  		goto gameover;
  		break;
  	    case 3:
  		printf("right");
  		printf("\ncongrats you have won  Rs 5000000\n\n");
  		break;
  		case 4:
  		printf("wrong");
  		goto gameover;
  		break;
  		default:
  	    printf("\nenter correct option");
	  	goto w;
  }
  printf("this question is for Rs 10000000\n\n");
   printf("your next question\n \n");
   end:
   printf("Question 15.Who is the first woman to successfully climb K2, the world’s second highest mountain peak ?\n");
  printf("Options are.\n1.. Junko Tabei \n2. Wanda Rutklewicz \n3. Tamae Watanabe \n4. Chantal Mauduit\n\n");
  printf("\n\nenter the option :");
  scanf(" %d",&n);
  switch(n)
  {
  	case 1:
  		printf("wrong");
  		goto gameover;
  		break;
  	case 2:
  		printf("right");
  		printf("\ncongrats you have won  Rs 10000000\n\n");
  		printf("\ncongrats you have become crorepati");
  		
  		break;
  	case 3:
  			printf("wrong");
  			goto gameover;
  		break;
  		case 4:
  				printf("wrong");
  				goto gameover;
  		break;
  		default:
  			printf("\nenter correct option");
	  		goto end;
  }
  
	gameover:
	printf("\nyou are out");
	printf("\nyou only won that much of amount that you gain in your last correct question");
	
	
	
	
	
}
