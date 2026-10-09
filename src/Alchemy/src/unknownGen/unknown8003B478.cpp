#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80029E64(void *);
void *fn_8002C31C();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igFile_register();
void igGamecubeHostFile_fieldInit();
void *igGamecubeLongTimer_getMetaCall();
void igLongTimer_register();
extern char lbl_80468814[];
extern char lbl_804688D4[];
extern char lbl_804703A4[];
extern char lbl_8047043C[];
extern char lbl_804727A4[];
extern char lbl_80473354[];
extern char lbl_804733EC[];
extern char lbl_8047650C[];
extern void *lbl_80561978;
extern void *lbl_805620B4;
extern void *lbl_805620B8;
extern void *lbl_805621F4;
void *igGamecubeLongTimer_vtableRead();
void fn_8003B50C();
void igGamecubeLongTimer_register();
void *igGamecubeLongTimer_parentMeta();
void *igGamecubeHostFile_getMeta();
void *igGamecubeHostFile_vtableRead();
void fn_8003B744();
void igGamecubeHostFile_register();
void *igGamecubeHostFile_getMetaCall();
}
struct UnknownGenObject8003B4B4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8003B61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B61C(){fn_8006665C(this);}
};
struct UnknownGenObject8003B61C_0 : UnknownGenRoot8003B61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B61C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003B61C_1 : UnknownGenObject8003B61C_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8003B61C_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8003B61C : UnknownGenObject8003B61C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8003B61C(){unknown00=lbl_8047043C;}
};
extern "C" {
void *igGamecubeLongTimer_getMeta(){
 if(!lbl_805620B4 || !(reinterpret_cast<unsigned int *>(lbl_805620B4)[0x24/4]&4)) fn_8003B50C();
 return lbl_805620B4;
}
void *igGamecubeLongTimer_vtableRead(){
 UnknownGenObject8003B4B4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804733EC;
 object.unknown00=lbl_80473354;
 object.unknown00=lbl_804703A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B50C(){
 fn_80066188((int)igGamecubeLongTimer_register);
}
void igGamecubeLongTimer_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620B4,(int)igLongTimer_register,(int)igGamecubeLongTimer_parentMeta,(int)igGamecubeLongTimer_getMetaCall,(int)lbl_80468814,40,(int)igGamecubeLongTimer_vtableRead,0,0,0);
}
void *igGamecubeLongTimer_parentMeta(){return lbl_80561978;}
void *fn_8003B5A4(){
 if(!lbl_805620B8) lbl_805620B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805620B8;
}
void *igGamecubeHostFile_getMeta(){
 if(!lbl_805620B8 || !(reinterpret_cast<unsigned int *>(lbl_805620B8)[0x24/4]&4)) fn_8003B744();
 return lbl_805620B8;
}
void *igGamecubeHostFile_vtableRead(){
 UnknownGenObject8003B61C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_8047043C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B744(){
 fn_80066188((int)igGamecubeHostFile_register);
}
void igGamecubeHostFile_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620B8,(int)igFile_register,(int)fn_8002C31C,(int)igGamecubeHostFile_getMetaCall,(int)lbl_804688D4,56,(int)igGamecubeHostFile_vtableRead,(int)igGamecubeHostFile_fieldInit,0,0);
}
void *igGamecubeHostFile_getMetaCall(){return igGamecubeHostFile_getMeta();}
}
#pragma pop
