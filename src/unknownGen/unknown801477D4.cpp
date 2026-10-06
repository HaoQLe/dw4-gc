#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_8012FC48();
void fn_8013A9EC();
void *fn_8013AFE4();
void *fn_801473EC();
void fn_80147428();
void fn_80147908();
extern char lbl_8049EB58[];
extern char lbl_8049EB68[];
extern void *lbl_805641F8;
void fn_80147870();
void *fn_801478E8();
}
extern "C" {
UnknownGenHolder *fn_801477D4(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_80147848(){
 fn_80066188((int)fn_80147870);
}
void fn_80147870(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641F8,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_801478E8,(int)lbl_8049EB68,108,(int)fn_80147428,(int)fn_80147908,0,(int)lbl_8049EB58);
}
void *fn_801478E8(){return fn_801473EC();}
}
#pragma pop
