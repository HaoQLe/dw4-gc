#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *igGamecubeVisualContext_getMeta();
void igNamedObject_register();
void *igVertexArray2_fieldInit();
extern char lbl_8047650C[];
extern char lbl_804883CC[];
extern char lbl_80488408[];
extern char lbl_80488418[];
extern char lbl_804921D4[];
extern char lbl_8049233C[];
extern char lbl_8055EA74[8];
extern char lbl_8055EA7C[4];
extern char lbl_8055EA80[4];
extern char lbl_8055EA84[4];
extern char lbl_8055EA88[4];
extern void *lbl_805621F4;
extern void *lbl_80562D78;
extern void *lbl_80562D84;
void *igVertexArray2Helper_getMeta();
void *igVertexArray2Helper_vtableRead();
void fn_800CED80();
void igVertexArray2Helper_register();
void *igVertexArray2Helper_getMetaCall();
void igVertexArray2Helper_fieldInit();
void *fn_800CEEF4();
void *igVertexArray2_getMeta();
void *igVertexArray2_vtableRead();
void fn_800CF0BC();
void igVertexArray2_register();
void *igVertexArray2_getMetaCall();
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
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){fn_8006665C(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=lbl_8049233C;}
};
extern "C" {
void *igGamecubeVisualContext_getMetaCall(){return igGamecubeVisualContext_getMeta();}
void *fn_800CEC2C(void *object){
 fn_800CED80();
 return fn_8006546C(lbl_80562D78,object);
}
void *igVertexArray2Helper_getMeta(){
 if(!lbl_80562D78 || !(reinterpret_cast<unsigned int *>(lbl_80562D78)[0x24/4]&4)) fn_800CED80();
 return lbl_80562D78;
}
void *igVertexArray2Helper_vtableRead(){
 UnknownGenObject800CECA0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804921D4;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CED80(){
 fn_80066188((int)igVertexArray2Helper_register);
}
void igVertexArray2Helper_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D78,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexArray2Helper_getMetaCall,(int)lbl_804883CC,16,(int)igVertexArray2Helper_vtableRead,(int)igVertexArray2Helper_fieldInit,0,(int)lbl_8055EA74);
}
void *igVertexArray2Helper_getMetaCall(){return igVertexArray2Helper_getMeta();}
void igVertexArray2Helper_fieldInit(){
 void *value0=lbl_80562D78;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EA7C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CEEF4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EA80,lbl_8055EA84,lbl_8055EA88,value1);
}
void *fn_800CEEBC(void *object){
 fn_800CF0BC();
 return fn_8006546C(lbl_80562D84,object);
}
void *fn_800CEEF4(){
 if(!lbl_80562D84) lbl_80562D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D84;
}
void *igVertexArray2_getMeta(){
 if(!lbl_80562D84 || !(reinterpret_cast<unsigned int *>(lbl_80562D84)[0x24/4]&4)) fn_800CF0BC();
 return lbl_80562D84;
}
void *igVertexArray2_vtableRead(){
 UnknownGenObject800CEF6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF0BC(){
 fn_80066188((int)igVertexArray2_register);
}
void igVertexArray2_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D84,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexArray2_getMetaCall,(int)lbl_80488418,24,(int)igVertexArray2_vtableRead,(int)igVertexArray2_fieldInit,0,(int)lbl_80488408);
}
void *igVertexArray2_getMetaCall(){return igVertexArray2_getMeta();}
}
#pragma pop
