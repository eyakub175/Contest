    #include <stdio.h>
    #include <string.h>
    char S[1010];
    int main(){
    	int t,len;
    	scanf("%d",&t);
    	while(t--){
    		scanf("%s",S+1);
    		len=strlen(S+1);
    		if(S[len-1]=='p'&&S[len]=='o')printf("FILIPINO\n");
    		else if(S[len-1]=='d'&&S[len]=='a')printf("KOREAN\n");
    		else printf("JAPANESE\n");
    	}
    	return 0;
    }

