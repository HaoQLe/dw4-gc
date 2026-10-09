#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *igGamecubeVertexArray2_getMeta();
void igNamedObject_register();
void *igVertexStream_fieldInit();
extern char lbl_8047650C[];
extern char lbl_80480EC0[];
extern char lbl_804885C8[];
extern char lbl_804922CC[];
extern char lbl_8055EA8C[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *lbl_80562D9C;
void *igVertexStream_getMeta();
void *igVertexStream_vtableRead();
void fn_800CF498();
void igVertexStream_register();
void *igVertexStream_getMetaCall();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=lbl_804922CC;}
};
extern "C" {
void *igGamecubeVertexArray2_getMetaCall(){return igGamecubeVertexArray2_getMeta();}
void *fn_800CF270(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D94) lbl_80562D94=fn_800635C8(data+0x7648,data+0x7630,data+0x763C,0x3);
 return lbl_80562D94;
}
void *fn_800CF2BC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D98) lbl_80562D98=fn_800635C8(data+0x76F0,data+0x76D0,data+0x76E0,0x4);
 return lbl_80562D98;
}
void *fn_800CF308(void *object){
 fn_800CF498();
 return fn_8006546C(lbl_80562D9C,object);
}
void *fn_800CF340(){
 if(!lbl_80562D9C) lbl_80562D9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D9C;
}
void *igVertexStream_getMeta(){
 if(!lbl_80562D9C || !(reinterpret_cast<unsigned int *>(lbl_80562D9C)[0x24/4]&4)) fn_800CF498();
 return lbl_80562D9C;
}
void *igVertexStream_vtableRead(){
 UnknownGenObject800CF3B8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804922CC;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF498(){
 fn_80066188((int)igVertexStream_register);
}
void igVertexStream_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D9C,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexStream_getMetaCall,(int)lbl_804885C8,36,(int)igVertexStream_vtableRead,(int)igVertexStream_fieldInit,0,(int)lbl_8055EA8C);
}
void *igVertexStream_getMetaCall(){return igVertexStream_getMeta();}
}
#pragma pop
