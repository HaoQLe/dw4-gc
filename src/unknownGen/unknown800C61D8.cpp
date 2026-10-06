#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805624B8;
extern void *lbl_805624C0;
extern void *lbl_805624CC;
extern void *lbl_805624D8;
extern void *lbl_805624E8;
extern void *lbl_805624FC;
extern void *lbl_80562528;
extern void *lbl_80562538;
extern void *lbl_80562548;
extern void *lbl_80562554;
extern void *lbl_80562598;
extern void *lbl_805625A4;
}
extern "C" {
void *fn_800C61D8(){return lbl_805624B8;}
void *fn_800C61E0(){return lbl_805624C0;}
void fn_800C61E8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *fn_800C61F0(){return lbl_805624CC;}
void *fn_800C61F8(){return lbl_805624D8;}
void *fn_800C6200(){return lbl_805624E8;}
void *fn_800C6208(){return lbl_805624FC;}
int fn_800C6210(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28);}
void fn_800C6218(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36)=value;}
int fn_800C6220(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36);}
void *fn_800C6228(){return lbl_80562528;}
void fn_800C6230(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
void fn_800C6238(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+24)=value;}
void fn_800C6240(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28)=value;}
void fn_800C6248(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32)=value;}
void fn_800C6250(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *fn_800C62C0(){return lbl_80562538;}
void fn_800C62C8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800C62D0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void *fn_800C62D8(){return lbl_80562548;}
void fn_800C62E0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *fn_800C6350(){return lbl_80562554;}
void *fn_800C6358(){return lbl_80562598;}
void fn_800C6360(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *fn_800C6368(){return lbl_805625A4;}
}
#pragma pop
