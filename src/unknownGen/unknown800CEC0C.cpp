#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800CF17C();
void *fn_800D61B4();
extern char lbl_8047650C[];
extern char lbl_804883CC[];
extern char lbl_80488408[];
extern char lbl_80488418[];
extern char lbl_804921D4[];
extern char lbl_8049233C[];
extern char lbl_8055EA74[8];
extern char lbl_8055EA7C[4];
extern char lbl_8055EA80[4];
extern char lbl_8055EA84[4];
extern char lbl_8055EA88[4];
extern void *lbl_805621F4;
extern void *lbl_80562D78;
extern void *lbl_80562D84;
void *fn_800CEC64();
void *fn_800CECA0();
void fn_800CED80();
void fn_800CEDA8();
void *fn_800CEE1C();
void fn_800CEE3C();
void *fn_800CEEF4();
void *fn_800CEF30();
void *fn_800CEF6C();
void fn_800CF0BC();
void fn_800CF0E4();
void *fn_800CF15C();
}
struct UnknownGenRoot800CECA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CECA0(){fn_8006665C(this);}
};
struct UnknownGenObject800CECA0_0 : UnknownGenRoot800CECA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CECA0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CECA0 : UnknownGenObject800CECA0_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800CECA0(){unknown00=lbl_804921D4;}
};
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){fn_8006665C(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=lbl_8049233C;}
};
extern "C" {
void *fn_800CEC0C(){return fn_800D61B4();}
void *fn_800CEC2C(void *object){
 fn_800CED80();
 return fn_8006546C(lbl_80562D78,object);
}
void *fn_800CEC64(){
 if(!lbl_80562D78 || !(reinterpret_cast<unsigned int *>(lbl_80562D78)[0x24/4]&4)) fn_800CED80();
 return lbl_80562D78;
}
void *fn_800CECA0(){
 UnknownGenObject800CECA0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804921D4;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CED80(){
 fn_80066188((int)fn_800CEDA8);
}
void fn_800CEDA8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D78,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CEE1C,(int)lbl_804883CC,16,(int)fn_800CECA0,(int)fn_800CEE3C,0,(int)lbl_8055EA74);
}
void *fn_800CEE1C(){return fn_800CEC64();}
void fn_800CEE3C(){
 void *value0=lbl_80562D78;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EA7C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CEEF4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EA80,lbl_8055EA84,lbl_8055EA88,value1);
}
void *fn_800CEEBC(void *object){
 fn_800CF0BC();
 return fn_8006546C(lbl_80562D84,object);
}
void *fn_800CEEF4(){
 if(!lbl_80562D84) lbl_80562D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D84;
}
void *fn_800CEF30(){
 if(!lbl_80562D84 || !(reinterpret_cast<unsigned int *>(lbl_80562D84)[0x24/4]&4)) fn_800CF0BC();
 return lbl_80562D84;
}
void *fn_800CEF6C(){
 UnknownGenObject800CEF6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF0BC(){
 fn_80066188((int)fn_800CF0E4);
}
void fn_800CF0E4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D84,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CF15C,(int)lbl_80488418,24,(int)fn_800CEF6C,(int)fn_800CF17C,0,(int)lbl_80488408);
}
void *fn_800CF15C(){return fn_800CEF30();}
}
#pragma pop
