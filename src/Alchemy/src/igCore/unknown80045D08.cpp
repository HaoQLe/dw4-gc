#include "unknown8004577C.h"
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80045D08(Unknown800442F8Owner *object){while(unknown80045D08Space(*object->unknown34)){if(*object->unknown34=='\n') ++object->unknown2C;++object->unknown34;}}
void fn_80045D54(void *,char *text){int count=strlen(text)-1;while(count>=0 && (__ctype_map[static_cast<unsigned char>(text[count])]&6)){text[count]=0;--count;}}
unsigned char fn_80045DC0(Unknown800442F8Owner *object,Unknown800442F8Stream **value){
 char buffer[0x1000];unsigned char result=0;
 fn_80045D08(object);
 if(sscanf(object->unknown34,lbl_80468F7C,buffer)==1){object->unknown34+=strlen(buffer);*value=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_80068430(object)));fn_80071F9C(*value,buffer);result=1;}
 return result;
}
unsigned char fn_80045E54(Unknown800442F8Owner *object,Unknown800442F8Stream **value){
 char buffer[0x1000];unsigned char result=0;
 fn_80045D08(object);
 if(sscanf(object->unknown34,lbl_80468FC4,buffer)==1){object->unknown34+=strlen(buffer);fn_80045D54(object,buffer);*value=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_80068430(object)));fn_80071F9C(*value,buffer);result=1;}
 return result;
}
unsigned char fn_80045EF4(Unknown800442F8Owner *object,int *value){
 char buffer[0x1000];unsigned char result=0;
 fn_80045D08(object);
 if(sscanf(object->unknown34,lbl_8055D804,buffer)==1){object->unknown34+=strlen(buffer);for(int i=0;i<3;++i){if(strcmp(buffer,lbl_8041353C[i])==0){*value=i;result=1;break;}}}
 return result;
}
}
#pragma pop
