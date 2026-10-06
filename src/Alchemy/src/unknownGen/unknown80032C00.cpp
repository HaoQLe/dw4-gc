#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_80029D58();
void fn_80032E10();
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80463100[];
extern char lbl_80467314[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern void *lbl_80561CFC;
extern void *lbl_80561D00;
void *fn_80032C84();
void *fn_80032CC0();
void fn_80032D58();
void fn_80032D80();
void *fn_80032DF0();
}
struct UnknownGenRoot80032CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032CC0(){fn_8006665C(this);}
};
struct UnknownGenObject80032CC0_0 : UnknownGenRoot80032CC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80032CC0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80032CC0 : UnknownGenObject80032CC0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject80032CC0(){unknown00=lbl_80472EF4;}
};
extern "C" {
void *fn_80032C00(){
 char *data=lbl_80463100;
 if(!lbl_80561CFC) lbl_80561CFC=fn_800635C8(data+0x4204,data+0x41EC,data+0x41F8,0x3);
 return lbl_80561CFC;
}
void *fn_80032C4C(void *object){
 fn_80032D58();
 return fn_8006546C(lbl_80561D00,object);
}
void *fn_80032C84(){
 if(!lbl_80561D00 || !(reinterpret_cast<unsigned int *>(lbl_80561D00)[0x24/4]&4)) fn_80032D58();
 return lbl_80561D00;
}
void *fn_80032CC0(){
 UnknownGenObject80032CC0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80032D58(){
 fn_80066188((int)fn_80032D80);
}
void fn_80032D80(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D00,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80032DF0,(int)lbl_80467314,28,(int)fn_80032CC0,(int)fn_80032E10,0,0);
}
void *fn_80032DF0(){return fn_80032C84();}
}
#pragma pop
