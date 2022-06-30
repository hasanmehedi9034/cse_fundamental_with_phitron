#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);

	char s[n][11], t[n][11];
	for(int i = 0; i < n; i++) {
		scanf("%s%s", s[i], t[i]);
		for(int j = 0; j < i; j++) {
			if(strcmp(s[j], s[i]) == 0 && strcmp(t[j] ,t[i]) == 0) {
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
}