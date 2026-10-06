#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800C6F28();
void fn_800C735C();
extern char lbl_8047E744[];
extern char lbl_8047E87C[];
extern char lbl_8047E88C[];
extern char lbl_8047E978[];
extern char lbl_8047EA3C[];
extern char lbl_8055E7F0[4];
extern char lbl_8055E7F4[4];
extern char lbl_8055E7F8[4];
extern char lbl_8055E7FC[4];
extern void *lbl_805621F4;
extern void *lbl_80562B24;
extern void *lbl_80562B40;
void *fn_800C6FD0();
void fn_800C700C();
void fn_800C7034();
void *fn_800C70A0();
void fn_800C70C0();
void *fn_800C714C();
void *fn_800C716C();
void *fn_800C71A8();
void fn_800C72B4();
void fn_800C72DC();
void *fn_800C7354();
}
struct UnknownGenRoot800C71A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800C71A8(){fn_8006665C(this);}
};
struct UnknownGenObject800C71A8 : UnknownGenRoot800C71A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject800C71A8(){unknown00=lbl_8047E978;}
};
extern "C" {
void *fn_800C6F5C(void *object){
 fn_800C700C();
 return fn_8006546C(lbl_80562B24,object);
}
void *fn_800C6F94(){
 if(!lbl_80562B24) lbl_80562B24=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B24;
}
void *fn_800C6FD0(){
 if(!lbl_80562B24 || !(reinterpret_cast<unsigned int *>(lbl_80562B24)[0x24/4]&4)) fn_800C700C();
 return lbl_80562B24;
}
void fn_800C700C(){
 fn_80066188((int)fn_800C7034);
}
void fn_800C7034(){
 fn_800C6F28();
 fn_80066204(1,(int)&lbl_80562B24,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800C70A0,(int)lbl_8047E744,12,0,(int)fn_800C70C0,0,0);
}
void *fn_800C70A0(){return fn_800C6FD0();}
void fn_800C70C0(){
 void *value0=lbl_80562B24;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E7F0,1);
 void *value2=fn_800658E4(value0,value1);
 fn_8003EC68(value2,1);
 fn_800659C0(value0,lbl_8055E7F4,lbl_8055E7F8,lbl_8055E7FC,value1);
 *reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80562B24)+60)=(void *)fn_800C714C;
}
void *fn_800C714C(){return fn_800C716C();}
void *fn_800C716C(){
 if(!lbl_80562B40 || !(reinterpret_cast<unsigned int *>(lbl_80562B40)[0x24/4]&4)) fn_800C72B4();
 return lbl_80562B40;
}
void *fn_800C71A8(){
 UnknownGenObject800C71A8 object;
 object.unknown00=lbl_8047EA3C;
 object.unknown00=lbl_8047E978;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800C72B4(){
 fn_80066188((int)fn_800C72DC);
}
void fn_800C72DC(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B40,(int)fn_800C7034,(int)fn_800C7354,(int)fn_800C714C,(int)lbl_8047E88C,40,(int)fn_800C71A8,(int)fn_800C735C,0,(int)lbl_8047E87C);
}
void *fn_800C7354(){return lbl_80562B24;}
}
#pragma pop
