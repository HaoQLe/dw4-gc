#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igInfo_register();
void igMetaField_register();
extern char lbl_80463100[];
extern char lbl_804645A4[];
extern char lbl_804718B0[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern void *lbl_805617B4;
extern void *lbl_805617B8;
extern void *lbl_805617BC;
extern void *lbl_805621F4;
void *igMetaFieldInfo_getMeta();
void *igMetaFieldInfo_vtableRead();
void fn_8002A53C();
void igMetaFieldInfo_register();
void *igMetaFieldInfo_getMetaCall();
void fn_8002A6B0();
}
struct UnknownGenRoot8002A494 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A494(){fn_8006665C(this);}
};
struct UnknownGenObject8002A494_0 : UnknownGenRoot8002A494 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002A494_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002A494_1 : UnknownGenObject8002A494_0 {
 inline ~UnknownGenObject8002A494_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8002A494 : UnknownGenObject8002A494_1 {
 char unknown0C[20];
 inline ~UnknownGenObject8002A494(){unknown00=lbl_804718B0;}
};
extern "C" {
void *fn_8002A420(void *object){
 fn_8002A53C();
 return fn_8006546C(lbl_805617B4,object);
}
void *igMetaFieldInfo_getMeta(){
 if(!lbl_805617B4 || !(reinterpret_cast<unsigned int *>(lbl_805617B4)[0x24/4]&4)) fn_8002A53C();
 return lbl_805617B4;
}
void *igMetaFieldInfo_vtableRead(){
 UnknownGenObject8002A494 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804718B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002A53C(){
 fn_80066188((int)igMetaFieldInfo_register);
}
void igMetaFieldInfo_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805617B4,(int)igInfo_register,(int)fn_800284EC,(int)igMetaFieldInfo_getMetaCall,(int)lbl_804645A4,20,(int)igMetaFieldInfo_vtableRead,0,0,0);
}
void *igMetaFieldInfo_getMetaCall(){return igMetaFieldInfo_getMeta();}
void *fn_8002A5EC(){
 char *data=lbl_80463100;
 if(!lbl_805617B8) lbl_805617B8=fn_800635C8(data+0x1674,data+0x1654,data+0x1664,0x4);
 return lbl_805617B8;
}
void *fn_8002A638(){
 if(!lbl_805617BC) lbl_805617BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805617BC;
}
void *igMetaField_getMeta(){
 if(!lbl_805617BC || !(reinterpret_cast<unsigned int *>(lbl_805617BC)[0x24/4]&4)) fn_8002A6B0();
 return lbl_805617BC;
}
void fn_8002A6B0(){
 fn_80066188((int)igMetaField_register);
}
}
#pragma pop
