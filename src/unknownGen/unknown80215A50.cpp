#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80565030;
extern void *lbl_8056506C;
extern void *lbl_805650BC;
extern void *lbl_80565118;
extern void *lbl_805651A8;
extern void *lbl_805651FC;
extern void *lbl_805652D8;
extern void *lbl_80565304;
extern void *lbl_805653BC;
extern void *lbl_8056542C;
extern void *lbl_80565468;
extern void *lbl_805654B4;
}
extern "C" {
void *fn_80215A50(){return lbl_80565030;}
void *fn_80215A58(){return lbl_8056506C;}
void *fn_80215A60(){return lbl_805650BC;}
void *fn_80215A68(){return lbl_80565118;}
void *fn_80215A70(){return lbl_805651A8;}
void fn_80215A78(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20)=value;
}
void fn_80215AE8(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24)=value;
}
void fn_80215B58(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void fn_80215B60(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52)=value;}
void *fn_80215B68(){return lbl_805651FC;}
int fn_80215B70(){return 0;}
void fn_80215B78(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void fn_80215B80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+52)=value;}
void fn_80215B88(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x24)=value;
}
void *fn_80215BF8(){return lbl_805652D8;}
void *fn_80215C00(){return lbl_80565304;}
void *fn_80215C08(){return lbl_805653BC;}
void *fn_80215C10(){return lbl_8056542C;}
void *fn_80215C18(){return lbl_80565468;}
void *fn_80215C20(){return lbl_805654B4;}
unsigned char fn_80215C28(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+81);}
int fn_80215C30(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+84);}
}
#pragma pop
