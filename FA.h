#ifndef FA
#define FA

int GetLen(std::string str){
int len = 0;
for(int i = 0;str[i]!='\0';i++){
    len++;
}
return len;
}

#endif
