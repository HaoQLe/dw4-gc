#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void igRawRefMetaField_registerNow();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006C4B8(void *);
void igObject_register();
void *igQueue_fieldInit();
void *igRawRefMetaField_getMeta();
void igRawRefMetaField_register();
extern char igRawRefArrayMetaField_className[];
extern char lbl_80471384[];
extern char igRawRefArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476630[];
extern char lbl_8055D188[8];
extern char lbl_8055D190[4];
extern char lbl_8055D194[4];
extern char lbl_8055D198[4];
extern char lbl_8055D19C[4];
extern char lbl_8055D1A0[8];
extern char lbl_8055D1A8[8];
extern void *igRawRefMetaField_meta;
extern void *lbl_80561698;
extern void *igRawRefArrayMetaField_meta;
extern void *lbl_805616A0;
extern void *igQueue_meta;
extern void *lbl_805621F4;
void *igRawRefArrayMetaField_getMeta();
void *igRawRefArrayMetaField_vtableRead();
void igRawRefArrayMetaField_registerNow();
void igRawRefArrayMetaField_register();
void *igRawRefArrayMetaField_getMetaCall();
void *igRawRefArrayMetaField_parentMeta();
void igRawRefArrayMetaField_fieldInit();
void *igQueue_getMeta();
void igQueue_registerNow();
void igQueue_register();
void *igQueue_getMetaCall();
}
struct UnknownGenRoot80027890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027890(){fn_8006C4B8(this);}
};
struct UnknownGenObject80027890_0 : UnknownGenRoot80027890 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80027890_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80027890_1 : UnknownGenObject80027890_0 {
 inline ~UnknownGenObject80027890_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject80027890_2 : UnknownGenObject80027890_1 {
 inline ~UnknownGenObject80027890_2(){unknown00=lbl_80476630;}
};
struct UnknownGenObject80027890 : UnknownGenObject80027890_2 {
 char unknown10[48];
 inline ~UnknownGenObject80027890(){unknown00=igRawRefArrayMetaField_vtable;}
};
extern "C" {
void *igRawRefMetaField_getMetaCall(){return igRawRefMetaField_getMeta();}
void fn_8002778C(){
 if(!lbl_80561698){
  void *object=(lbl_80561698=meta_createInstance(igRawRefMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561698));
   reinterpret_cast<short *>(lbl_80561698)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561698);
  }
 }
}
void *fn_80027824(){
 if(!lbl_80561698){
  igRawRefMetaField_registerNow();
 }
 return lbl_80561698;
}
void *igRawRefArrayMetaField_getMeta(){
 if(!igRawRefArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igRawRefArrayMetaField_meta)[0x24/4]&4)) igRawRefArrayMetaField_registerNow();
 return igRawRefArrayMetaField_meta;
}
void *igRawRefArrayMetaField_vtableRead(){
 UnknownGenObject80027890 object;
 object.unknown00=igRawRefArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRawRefArrayMetaField_registerNow(){
 meta_registerNow((int)igRawRefArrayMetaField_register);
}
void igRawRefArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igRawRefArrayMetaField_meta,(int)igRawRefMetaField_register,(int)igRawRefArrayMetaField_parentMeta,(int)igRawRefArrayMetaField_getMetaCall,(int)igRawRefArrayMetaField_className,60,(int)igRawRefArrayMetaField_vtableRead,(int)igRawRefArrayMetaField_fieldInit,0,(int)lbl_8055D188);
}
void *igRawRefArrayMetaField_getMetaCall(){return igRawRefArrayMetaField_getMeta();}
void *igRawRefArrayMetaField_parentMeta(){return igRawRefMetaField_meta;}
void igRawRefArrayMetaField_fieldInit(){
 void *meta=igRawRefArrayMetaField_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D190,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D194,lbl_8055D198,lbl_8055D19C,field);
}
void fn_80027A74(){
 if(!lbl_805616A0){
  void *object=(lbl_805616A0=meta_createInstance(igRawRefArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805616A0));
   reinterpret_cast<short *>(lbl_805616A0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805616A0);
  }
 }
}
void *igQueue_create(void *object){
 igQueue_registerNow();
 return meta_createInstance(igQueue_meta,object);
}
void *fn_80027B44(){
 if(!igQueue_meta) igQueue_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igQueue_meta;
}
void *igQueue_getMeta(){
 if(!igQueue_meta || !(reinterpret_cast<unsigned int *>(igQueue_meta)[0x24/4]&4)) igQueue_registerNow();
 return igQueue_meta;
}
void igQueue_registerNow(){
 meta_registerNow((int)igQueue_register);
}
void igQueue_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igQueue_meta,(int)igObject_register,(int)fn_800237D0,(int)igQueue_getMetaCall,(int)lbl_8055D1A8,12,0,(int)igQueue_fieldInit,0,(int)lbl_8055D1A0);
}
void *igQueue_getMetaCall(){return igQueue_getMeta();}
}
#pragma pop
