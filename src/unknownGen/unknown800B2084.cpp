#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B23E4();
void fn_800CDCC8();
extern char lbl_80478CBC[];
extern char lbl_80478CD0[];
extern char lbl_8047B85C[];
extern char lbl_8047B8E0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E274[4];
extern char lbl_8055E278[4];
extern char lbl_8055E27C[4];
extern char lbl_8055E280[4];
extern char lbl_8055E284[4];
extern void *lbl_805621F4;
extern void *lbl_805626A8;
extern void *lbl_805626B0;
void *fn_800B20C0();
void *fn_800B20FC();
void fn_800B2154();
void fn_800B217C();
void *fn_800B21EC();
void fn_800B220C();
void *fn_800B2298();
void *fn_800B22D4();
void fn_800B232C();
void fn_800B2354();
void *fn_800B23C4();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B2084(){
 if(!lbl_805626A8) lbl_805626A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626A8;
}
void *fn_800B20C0(){
 if(!lbl_805626A8 || !(reinterpret_cast<unsigned int *>(lbl_805626A8)[0x24/4]&4)) fn_800B2154();
 return lbl_805626A8;
}
void *fn_800B20FC(){
 UnknownGenObject800B20FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B85C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2154(){
 fn_80066188((int)fn_800B217C);
}
void fn_800B217C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626A8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B21EC,(int)lbl_80478CBC,16,(int)fn_800B20FC,(int)fn_800B220C,0,0);
}
void *fn_800B21EC(){return fn_800B20C0();}
void fn_800B220C(){
 void *value0=lbl_805626A8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E274,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E284);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDCC8;
 fn_800659C0(value0,lbl_8055E278,lbl_8055E27C,lbl_8055E280,value1);
}
void *fn_800B2298(){
 if(!lbl_805626B0 || !(reinterpret_cast<unsigned int *>(lbl_805626B0)[0x24/4]&4)) fn_800B232C();
 return lbl_805626B0;
}
void *fn_800B22D4(){
 UnknownGenObject800B22D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B8E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B232C(){
 fn_80066188((int)fn_800B2354);
}
void fn_800B2354(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B23C4,(int)lbl_80478CD0,16,(int)fn_800B22D4,(int)fn_800B23E4,0,0);
}
void *fn_800B23C4(){return fn_800B2298();}
}
#pragma pop
