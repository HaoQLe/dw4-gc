#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800CEE3C();
void *fn_800D61B4();
extern char lbl_8047650C[];
extern char lbl_804883CC[];
extern char lbl_804921D4[];
extern char lbl_8055EA74[8];
extern void *lbl_80562D78;
void *fn_800CEC64();
void *fn_800CECA0();
void fn_800CED80();
void fn_800CEDA8();
void *fn_800CEE1C();
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
}
#pragma pop
