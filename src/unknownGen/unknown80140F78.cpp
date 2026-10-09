#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80135250();
void *fn_8013AFE4();
void igChildContainer_register();
void igNodeTraversal_fieldInit();
void igOptTraverseGraph_register();
extern char lbl_8049C458[];
extern char lbl_8049E0AC[];
extern char lbl_8049E0C0[];
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A5D98[];
extern char lbl_804A5E2C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern void *lbl_80564028;
extern void *lbl_8056402C;
void *igNormalizeNormals_getMeta();
void *igNormalizeNormals_vtableRead();
void fn_8014112C();
void igNormalizeNormals_register();
void *igNormalizeNormals_getMetaCall();
void *igNodeTraversal_getMeta();
void *igNodeTraversal_vtableRead();
void fn_80141348();
void igNodeTraversal_register();
void *igNodeTraversal_getMetaCall();
}
struct UnknownGenRoot80140FB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140FB4(){fn_8006665C(this);}
};
struct UnknownGenObject80140FB4_0 : UnknownGenRoot80140FB4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80140FB4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80140FB4_1 : UnknownGenObject80140FB4_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject80140FB4_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject80140FB4 : UnknownGenObject80140FB4_1 {
 char unknown30[8];
 inline ~UnknownGenObject80140FB4(){unknown00=lbl_804A5D98;}
};
struct UnknownGenRoot80141218 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80141218(){fn_8006665C(this);}
};
struct UnknownGenObject80141218 : UnknownGenRoot80141218 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80141218(){unknown00=lbl_804A5E2C;}
};
extern "C" {
void *igNormalizeNormals_getMeta(){
 if(!lbl_80564028 || !(reinterpret_cast<unsigned int *>(lbl_80564028)[0x24/4]&4)) fn_8014112C();
 return lbl_80564028;
}
void *igNormalizeNormals_vtableRead(){
 UnknownGenObject80140FB4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A5D98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014112C(){
 fn_80066188((int)igNormalizeNormals_register);
}
void igNormalizeNormals_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564028,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igNormalizeNormals_getMetaCall,(int)lbl_8049E0AC,52,(int)igNormalizeNormals_vtableRead,0,0,0);
}
void *igNormalizeNormals_getMetaCall(){return igNormalizeNormals_getMeta();}
void *igNodeTraversal_getMeta(){
 if(!lbl_8056402C || !(reinterpret_cast<unsigned int *>(lbl_8056402C)[0x24/4]&4)) fn_80141348();
 return lbl_8056402C;
}
void *igNodeTraversal_vtableRead(){
 UnknownGenObject80141218 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A5E2C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80141348(){
 fn_80066188((int)igNodeTraversal_register);
}
void igNodeTraversal_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056402C,(int)igChildContainer_register,(int)fn_80135250,(int)igNodeTraversal_getMetaCall,(int)lbl_8049C458,44,(int)igNodeTraversal_vtableRead,(int)igNodeTraversal_fieldInit,0,(int)lbl_8049E0C0);
}
void *igNodeTraversal_getMetaCall(){return igNodeTraversal_getMeta();}
}
#pragma pop
