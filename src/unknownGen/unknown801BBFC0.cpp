#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AC8D0();
void *fn_801BBCCC();
void fn_801BBD08();
void fn_801BC290();
void fn_801C9D54();
void *fn_80218120();
extern char lbl_804AEDA8[];
extern char lbl_804B44E4[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char lbl_805604E4[8];
extern char lbl_805604EC[8];
extern char lbl_805604F4[8];
extern char lbl_805604FC[8];
extern char lbl_80560504[8];
extern char lbl_8056050C[8];
extern char lbl_80560514[8];
extern void *lbl_80564714;
extern void *lbl_80564DBC;
extern void *lbl_80564DC8;
extern void *lbl_80565428;
void fn_801BBFE8();
void *fn_801BC058();
void *fn_801BC078();
void fn_801BC080();
void *fn_801BC138();
void *fn_801BC174();
void fn_801BC1CC();
void fn_801BC1F4();
void *fn_801BC268();
void *fn_801BC288();
}
struct UnknownGenObject801BC174_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_801BBFC0(){
 fn_80066188((int)fn_801BBFE8);
}
void fn_801BBFE8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DBC,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_801BC058,(int)lbl_805604EC,176,(int)fn_801BBD08,(int)fn_801BC080,0,(int)lbl_805604E4);
}
void *fn_801BC058(){return fn_801BBCCC();}
void *fn_801BC078(){return lbl_80564714;}
void fn_801BC080(){
 void *value0=lbl_80564DBC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805604F4,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80218120();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_805604FC,lbl_80560504,lbl_8056050C,value1);
}
void *fn_801BC100(void *object){
 fn_801BC1CC();
 return fn_8006546C(lbl_80564DC8,object);
}
void *fn_801BC138(){
 if(!lbl_80564DC8 || !(reinterpret_cast<unsigned int *>(lbl_80564DC8)[0x24/4]&4)) fn_801BC1CC();
 return lbl_80564DC8;
}
void *fn_801BC174(){
 UnknownGenObject801BC174_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=lbl_804B44E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BC1CC(){
 fn_80066188((int)fn_801BC1F4);
}
void fn_801BC1F4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DC8,(int)fn_801C9D54,(int)fn_801BC288,(int)fn_801BC268,(int)lbl_804AEDA8,20,(int)fn_801BC174,(int)fn_801BC290,0,(int)lbl_80560514);
}
void *fn_801BC268(){return fn_801BC138();}
void *fn_801BC288(){return lbl_80565428;}
}
#pragma pop
