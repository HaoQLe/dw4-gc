#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_8010307C();
void *igGamecubeVertexArray2_getMetaCall();
void *igVertexArray2_getMetaCall();
void igVertexArray2_register();
extern char lbl_8047650C[];
extern char lbl_8048E298[];
extern char lbl_804912BC[];
extern char lbl_8049233C[];
extern void *lbl_80562D84;
extern void *lbl_805633B8;
void *igGamecubeVertexArray2_vtableRead();
void fn_800D7770();
void igGamecubeVertexArray2_register();
void *igGamecubeVertexArray2_parentMeta();
void *fn_800D7810();
}
struct UnknownGenRoot800D7610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7610(){fn_8006665C(this);}
};
struct UnknownGenObject800D7610_0 : UnknownGenRoot800D7610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D7610_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D7610_1 : UnknownGenObject800D7610_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D7610_1(){unknown00=lbl_8049233C;}
};
struct UnknownGenObject800D7610 : UnknownGenObject800D7610_1 {
 inline ~UnknownGenObject800D7610(){unknown00=lbl_804912BC;}
};
extern "C" {
void *fn_800D75B4(){return fn_8010307C();}
void *igGamecubeVertexArray2_getMeta(){
 if(!lbl_805633B8 || !(reinterpret_cast<unsigned int *>(lbl_805633B8)[0x24/4]&4)) fn_800D7770();
 return lbl_805633B8;
}
void *igGamecubeVertexArray2_vtableRead(){
 UnknownGenObject800D7610 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804912BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D7770(){
 fn_80066188((int)igGamecubeVertexArray2_register);
}
void igGamecubeVertexArray2_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633B8,(int)igVertexArray2_register,(int)igGamecubeVertexArray2_parentMeta,(int)igGamecubeVertexArray2_getMetaCall,(int)lbl_8048E298,24,(int)igGamecubeVertexArray2_vtableRead,(int)fn_800D7810,0,0);
}
void *igGamecubeVertexArray2_parentMeta(){return lbl_80562D84;}
void *fn_800D7810(){
 void *value0=lbl_805633B8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)igVertexArray2_getMetaCall;
 return value0;
}
}
#pragma pop
