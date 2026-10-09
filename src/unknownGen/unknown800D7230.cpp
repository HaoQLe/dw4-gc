#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D747C();
void *fn_800D75B4();
void *igGamecubeVertexStream_getMetaCall();
void igVertexStream_register();
extern char lbl_8047650C[];
extern char lbl_8048E058[];
extern char lbl_8049124C[];
extern char lbl_804922CC[];
extern char lbl_8055EDDC[8];
extern void *lbl_80562D9C;
extern void *lbl_80563374;
void *igGamecubeVertexStream_vtableRead();
void fn_800D73D4();
void igGamecubeVertexStream_register();
void *igGamecubeVertexStream_parentMeta();
}
struct UnknownGenRoot800D726C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D726C(){fn_8006665C(this);}
};
struct UnknownGenObject800D726C_0 : UnknownGenRoot800D726C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D726C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D726C_1 : UnknownGenObject800D726C_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D726C_1(){unknown00=lbl_804922CC;}
};
struct UnknownGenObject800D726C : UnknownGenObject800D726C_1 {
 char unknown18[72];
 UnknownGenRefMember unknown60;
 UnknownGenRefMember unknown64;
 char unknown68[16];
 inline ~UnknownGenObject800D726C(){unknown00=lbl_8049124C;}
};
extern "C" {
void *igGamecubeVertexStream_getMeta(){
 if(!lbl_80563374 || !(reinterpret_cast<unsigned int *>(lbl_80563374)[0x24/4]&4)) fn_800D73D4();
 return lbl_80563374;
}
void *igGamecubeVertexStream_vtableRead(){
 UnknownGenObject800D726C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804922CC;
 object.unknown14.value=0;
 object.unknown00=lbl_8049124C;
 object.unknown60.value=0;
 object.unknown64.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D73D4(){
 fn_80066188((int)igGamecubeVertexStream_register);
}
void igGamecubeVertexStream_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563374,(int)igVertexStream_register,(int)igGamecubeVertexStream_parentMeta,(int)igGamecubeVertexStream_getMetaCall,(int)lbl_8048E058,112,(int)igGamecubeVertexStream_vtableRead,(int)fn_800D747C,(int)fn_800D75B4,(int)lbl_8055EDDC);
}
void *igGamecubeVertexStream_parentMeta(){return lbl_80562D9C;}
}
#pragma pop
