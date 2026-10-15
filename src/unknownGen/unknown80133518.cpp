#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptVisitObject_register();
void igSeperateTransformChannels_fieldInit();
extern char igSeperateTransformChannels_className[];
extern char igSeperateTransformChannels_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igSeperateTransformChannels_meta;
void *igSeperateTransformChannels_getMeta();
void *igSeperateTransformChannels_vtableRead();
void igSeperateTransformChannels_registerNow();
void igSeperateTransformChannels_register();
void *igSeperateTransformChannels_getMetaCall();
}
struct UnknownGenRoot80133554 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133554(){igObject_construct(this);}
};
struct UnknownGenObject80133554_0 : UnknownGenRoot80133554 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80133554_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80133554_1 : UnknownGenObject80133554_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80133554_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80133554 : UnknownGenObject80133554_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 char unknown34[4];
 inline ~UnknownGenObject80133554(){unknown00=igSeperateTransformChannels_vtable;}
};
extern "C" {
void *igSeperateTransformChannels_getMeta(){
 if(!igSeperateTransformChannels_meta || !(reinterpret_cast<unsigned int *>(igSeperateTransformChannels_meta)[0x24/4]&4)) igSeperateTransformChannels_registerNow();
 return igSeperateTransformChannels_meta;
}
void *igSeperateTransformChannels_vtableRead(){
 UnknownGenObject80133554 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igSeperateTransformChannels_vtable;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSeperateTransformChannels_registerNow(){
 meta_registerNow((int)igSeperateTransformChannels_register);
}
void igSeperateTransformChannels_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igSeperateTransformChannels_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igSeperateTransformChannels_getMetaCall,(int)igSeperateTransformChannels_className,52,(int)igSeperateTransformChannels_vtableRead,(int)igSeperateTransformChannels_fieldInit,0,0);
}
void *igSeperateTransformChannels_getMetaCall(){return igSeperateTransformChannels_getMeta();}
}
#pragma pop
