#include <stdio.h>
#include <string.h>

int main(){
	
	char t1[540];
	char t2[540];
	char word[35];
	
	int i, j=0, v1=0, v2=0, v3=0; 
    int cont=0, contM=0, contm=0;
	int k, t=0, l;
	
	scanf(" %500[^\n]", t1);
	
	for(i=0;i<strlen(t1)+1;i++){
		for(l=0;l<35;l++){
			word[l]='\0';
		}		
		j=0;
		if(t1[i]=='['){
			i++;
			while(t1[i]!=']'){
				cont=0;
				v1=0;
				v2=0;
				v3=0;
				contM=0;
				contm=0;
				while(t1[i]!='-'){
					v1=v2;
					v2=v3;
					v3=t1[i]-48;
					i++;
					cont++;
				}
				if(cont==2){
					word[j]=v2*10+v3;
					if(word[j]<97){
						contM++;
					}
					else{
						contm++;
					}
					j++;
				}
				else{
					word[j]=v1*100+v2*10+v3;
					j++;
					contm++;
				}
				i++;
			}
			word[j]='\0';
			if(contM>contm){
				for(k=0;k<j;k++){
					if(word[k]>90){
						word[k]-=32;
					}
				}
			}
			else{
				for(k=0;k<j;k++){
					if(word[k]<97){
						word[k]+=32;
					}
				}
			}	
		}
		if(strlen(word)==0){	
			t2[t]=t1[i];
			t++;
		}
		else{
			t2[t]='\0';
			strcat(t2, word);
			t=t+strlen(word);
		}
	}
	t2[t+1]='\0';
	printf("%s", t2);
	
	return 0;
}