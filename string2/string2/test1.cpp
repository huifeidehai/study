#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAXLEN 255

typedef struct {
	char ch[MAXLEN];//最大长度
	int len;//实际长度
}SString;
void StrAssign(SString &S)
{
	char str1[] = { "a" };
	char str2[] = { "A" };
	int i = 1;
	scanf("%s", str1);
	while (strcmp(str1, str2) != 0)
	{
		S.ch[i] = str1[0];
		i++;
		(S.len)++;
		scanf("%s", &str1);
	}

}
int StrCompare(SString S,SString L) {
	for (int i = 1; i < S.len && i < L.len; i++)
	{
		if (S.ch[i] != L.ch[i])
			return S.ch[i] - L.ch[i];
	}
	return S.len - L.len;
}
bool SubStain(SString& sub, SString S, int pos, int len) {
	if (pos + len - 1 > S.len)//字符串范围越界
		return false;
	for (int i = pos; i < len + pos; i++)
		sub.ch[i - pos + 1] = S.ch[i];
	sub.len = len;
	return true;
    

}
int Index(SString S, SString L) {
	if (L.len > S.len)
		return false;
	int  n = S.len, m = L.len;
	SString sub = {0,0};
	for(int i=1; i <n-m+1; i++)
	{
		SubStain(sub, S, i, m);
		if (StrCompare(sub,L) == 0)
			return i;
	}
	return 0;
}
int main() {
	SString S = { 0,0 };
	SString L = { 0,0};
	/*SString sub = { 0,0 };*/
	/*int pos = 0, len = 0;*/
	StrAssign(S);
	StrAssign(L);
	int i=Index(S, L);
	/*scanf("%d%d", &pos, &len);
	SubStain(sub, S, pos, len);*/
	return 0;
}