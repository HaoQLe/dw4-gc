#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igParameterExist_fieldInit();
void igParameterSetConstraint_register();
extern char igParameterNonNull_className[];
extern char igParameterMatch_className[];
extern char igParameterExist_className[];
extern char igParameterNonNull_vtable[];
extern char igParameterMatch_vtable[];
extern char igParameterExist_vtable[];
extern char lbl_804AA298[];
extern char lbl_8055F740[4];
extern char lbl_8055F744[4];
extern char lbl_8055F748[4];
extern char lbl_8055F74C[4];
extern char lbl_8055F750[8];
extern char lbl_8055F758[8];
extern char lbl_8055F760[8];
extern char lbl_8055F768[8];
extern char lbl_8055F770[8];
extern void *igParameterSetConstraint_meta;
extern void *igParameterNonNull_meta;
extern void *igParameterMatch_meta;
extern void *igParameterExist_meta;
void *igParameterNonNull_getMeta();
void *igParameterNonNull_vtableRead();
void igParameterNonNull_registerNow();
void igParameterNonNull_register();
void *igParameterNonNull_getMetaCall();
void *fn_80139794();
void igParameterNonNull_fieldInit();
void *igParameterMatch_getMeta();
void *igParameterMatch_vtableRead();
void igParameterMatch_registerNow();
void igParameterMatch_register();
void *igParameterMatch_getMetaCall();
void igParameterMatch_fieldInit();
void *igParameterExist_getMeta();
void *igParameterExist_vtableRead();
void igParameterExist_registerNow();
void igParameterExist_register();
void *igParameterExist_getMetaCall();
}
struct UnknownGenRoot801395FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801395FC(){fn_8006665C(this);}
};
struct UnknownGenObject801395FC_0 : UnknownGenRoot801395FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801395FC_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject801395FC : UnknownGenObject801395FC_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801395FC(){unknown00=igParameterNonNull_vtable;}
};
struct UnknownGenRoot80139878 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139878(){fn_8006665C(this);}
};
struct UnknownGenObject80139878_0 : UnknownGenRoot80139878 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139878_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139878 : UnknownGenObject80139878_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80139878(){unknown00=igParameterMatch_vtable;}
};
struct UnknownGenRoot80139B24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139B24(){fn_8006665C(this);}
};
struct UnknownGenObject80139B24_0 : UnknownGenRoot80139B24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139B24_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139B24 : UnknownGenObject80139B24_0 {
 UnknownGenString unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80139B24(){unknown00=igParameterExist_vtable;}
};
extern "C" {
void *igParameterNonNull_getMeta(){
 if(!igParameterNonNull_meta || !(reinterpret_cast<unsigned int *>(igParameterNonNull_meta)[0x24/4]&4)) igParameterNonNull_registerNow();
 return igParameterNonNull_meta;
}
void *igParameterNonNull_vtableRead(){
 UnknownGenObject801395FC object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=igParameterNonNull_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterNonNull_registerNow(){
 meta_registerNow((int)igParameterNonNull_register);
}
void igParameterNonNull_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterNonNull_meta,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterNonNull_getMetaCall,(int)igParameterNonNull_className,16,(int)igParameterNonNull_vtableRead,(int)igParameterNonNull_fieldInit,0,0);
}
void *igParameterNonNull_getMetaCall(){return igParameterNonNull_getMeta();}
void *fn_80139794(){return igParameterSetConstraint_meta;}
void igParameterNonNull_fieldInit(){
 void *value0=igParameterNonNull_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F740,1);
 fn_800659C0(value0,lbl_8055F744,lbl_8055F748,lbl_8055F74C,value1);
}
void *igParameterMatch_create(void *object){
 igParameterMatch_registerNow();
 return meta_createInstance(igParameterMatch_meta,object);
}
void *igParameterMatch_getMeta(){
 if(!igParameterMatch_meta || !(reinterpret_cast<unsigned int *>(igParameterMatch_meta)[0x24/4]&4)) igParameterMatch_registerNow();
 return igParameterMatch_meta;
}
void *igParameterMatch_vtableRead(){
 UnknownGenObject80139878 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=igParameterMatch_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterMatch_registerNow(){
 meta_registerNow((int)igParameterMatch_register);
}
void igParameterMatch_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterMatch_meta,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterMatch_getMetaCall,(int)igParameterMatch_className,20,(int)igParameterMatch_vtableRead,(int)igParameterMatch_fieldInit,0,0);
}
void *igParameterMatch_getMetaCall(){return igParameterMatch_getMeta();}
void igParameterMatch_fieldInit(){
 void *value0=igParameterMatch_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F750,2);
 fn_800659C0(value0,lbl_8055F758,lbl_8055F760,lbl_8055F768,value1);
}
void *igParameterExist_create(void *object){
 igParameterExist_registerNow();
 return meta_createInstance(igParameterExist_meta,object);
}
void *igParameterExist_getMeta(){
 if(!igParameterExist_meta || !(reinterpret_cast<unsigned int *>(igParameterExist_meta)[0x24/4]&4)) igParameterExist_registerNow();
 return igParameterExist_meta;
}
void *igParameterExist_vtableRead(){
 UnknownGenObject80139B24 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=igParameterExist_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterExist_registerNow(){
 meta_registerNow((int)igParameterExist_register);
}
void igParameterExist_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterExist_meta,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterExist_getMetaCall,(int)igParameterExist_className,24,(int)igParameterExist_vtableRead,(int)igParameterExist_fieldInit,0,(int)lbl_8055F770);
}
void *igParameterExist_getMetaCall(){return igParameterExist_getMeta();}
}
#pragma pop
