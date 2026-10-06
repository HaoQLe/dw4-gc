#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562644;
extern void *lbl_80562658;
extern void *lbl_80562694;
extern void *lbl_805626A0;
extern void *lbl_805626A8;
}
extern "C" {
void *fn_800C649C(){return lbl_80562644;}
void fn_800C64A4(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x10)=value;
}
void *fn_800C6514(){return lbl_80562658;}
void *fn_800C651C(){return lbl_80562694;}
void fn_800C6524(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
void *fn_800C6594(){return lbl_805626A0;}
void *fn_800C659C(){return lbl_805626A8;}
}
#pragma pop
