#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C3D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *igArenaMemoryPool_getMeta();
void igFile_register();
void igMemoryFile_fieldInit();
extern char lbl_80464FDC[];
extern char lbl_80471E78[];
extern char lbl_804727A4[];
extern char lbl_8047650C[];
extern void *lbl_805618F0;
extern void *lbl_80561B3C;
void *igMemoryFile_getMeta();
void *igMemoryFile_vtableRead();
void fn_8002C25C();
void igMemoryFile_register();
void *igMemoryFile_getMetaCall();
void *fn_8002C31C();
}
struct UnknownGenRoot8002C134 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C134(){fn_8006665C(this);}
};
struct UnknownGenObject8002C134_0 : UnknownGenRoot8002C134 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C134_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C134_1 : UnknownGenObject8002C134_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8002C134_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8002C134 : UnknownGenObject8002C134_1 {
 char unknown2C[28];
 inline ~UnknownGenObject8002C134(){unknown00=lbl_80471E78;}
};
extern "C" {
void *igArenaMemoryPool_getMetaCall(){return igArenaMemoryPool_getMeta();}
void *fn_8002C0C0(void *object){
 fn_8002C25C();
 return fn_8006546C(lbl_805618F0,object);
}
void *igMemoryFile_getMeta(){
 if(!lbl_805618F0 || !(reinterpret_cast<unsigned int *>(lbl_805618F0)[0x24/4]&4)) fn_8002C25C();
 return lbl_805618F0;
}
void *igMemoryFile_vtableRead(){
 UnknownGenObject8002C134 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_80471E78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C25C(){
 fn_80066188((int)igMemoryFile_register);
}
void igMemoryFile_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805618F0,(int)igFile_register,(int)fn_8002C31C,(int)igMemoryFile_getMetaCall,(int)lbl_80464FDC,60,(int)igMemoryFile_vtableRead,(int)igMemoryFile_fieldInit,(int)fn_8002C3D0,0);
}
void *igMemoryFile_getMetaCall(){return igMemoryFile_getMeta();}
void *fn_8002C31C(){return lbl_80561B3C;}
}
#pragma pop
