#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8010CBD4();
void fn_8010D60C();
void fn_8010DD38();
extern char lbl_80494850[];
extern char lbl_80496040[];
extern char lbl_80497D08[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern void *lbl_80563598;
extern void *lbl_805635C8;
extern void *lbl_8056373C;
void *fn_8010DB34();
void *fn_8010DB70();
void fn_8010DC78();
void fn_8010DCA0();
void *fn_8010DD10();
void *fn_8010DD30();
}
struct UnknownGenRoot8010DB70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DB70(){fn_8006665C(this);}
};
struct UnknownGenObject8010DB70_0 : UnknownGenRoot8010DB70 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DB70_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010DB70_1 : UnknownGenObject8010DB70_0 {
 inline ~UnknownGenObject8010DB70_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010DB70_2 : UnknownGenObject8010DB70_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010DB70_2(){unknown00=lbl_80497E1C;}
};
struct UnknownGenObject8010DB70 : UnknownGenObject8010DB70_2 {
 char unknown28[24];
 inline ~UnknownGenObject8010DB70(){unknown00=lbl_80497D08;}
};
extern "C" {
UnknownGenHolder *dtor_8010DAB8(UnknownGenHolder *object,short flags){
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
void *fn_8010DB2C(){return lbl_8056373C;}
void *fn_8010DB34(){
 if(!lbl_805635C8 || !(reinterpret_cast<unsigned int *>(lbl_805635C8)[0x24/4]&4)) fn_8010DC78();
 return lbl_805635C8;
}
void *fn_8010DB70(){
 UnknownGenObject8010DB70 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 object.unknown00=lbl_80497D08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010DC78(){
 fn_80066188((int)fn_8010DCA0);
}
void fn_8010DCA0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635C8,(int)fn_8010D60C,(int)fn_8010DD30,(int)fn_8010DD10,(int)lbl_80494850,64,(int)fn_8010DB70,(int)fn_8010DD38,0,0);
}
void *fn_8010DD10(){return fn_8010DB34();}
void *fn_8010DD30(){return lbl_80563598;}
}
#pragma pop
