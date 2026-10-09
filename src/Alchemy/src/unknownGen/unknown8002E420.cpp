#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void fn_8002E390();
void fn_8002F178();
void *fn_800326A0();
void fn_8003EC68(void *,int);
void fn_800535B8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *igIntMetaField_getMeta();
void igIntMetaField_register();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_8046543C[];
extern char lbl_80465450[];
extern char lbl_80471914[];
extern char lbl_8047236C[];
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_80475A98[];
extern char lbl_80475AFC[];
extern char lbl_80475B60[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D3CC[8];
extern char lbl_8055D3D4[4];
extern char lbl_8055D3D8[4];
extern char lbl_8055D3DC[4];
extern char lbl_8055D3E0[4];
extern char lbl_8055D3E4[8];
extern char lbl_8055D3EC[8];
extern char lbl_8055D3F4[7];
extern char lbl_8055D3FC[8];
extern char lbl_8055D404[8];
extern char lbl_8055D40C[8];
extern char lbl_8055D414[8];
extern void *lbl_805619E0;
extern void *lbl_805619E4;
extern void *lbl_805619E8;
extern void *lbl_805619EC;
extern void *lbl_805619F4;
extern void *lbl_805619F8;
extern void *lbl_80561A04;
extern void *lbl_805621F4;
void *igIntArrayMetaField_getMeta();
void *igIntArrayMetaField_vtableRead();
void fn_8002E614();
void igIntArrayMetaField_register();
void *igIntArrayMetaField_getMetaCall();
void *igIntArrayMetaField_parentMeta();
void igIntArrayMetaField_fieldInit();
void *igInfoList_getMeta();
void *igInfoList_vtableRead();
void fn_8002E90C();
void igInfoList_register();
void *igInfoList_getMetaCall();
void *igInfo_getMeta();
void *igInfo_vtableRead();
void fn_8002EA94();
void igInfo_register();
void *igInfo_getMetaCall();
void igInfo_fieldInit();
}
struct UnknownGenRoot8002E57C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E57C(){fn_800535B8(this);}
};
struct UnknownGenObject8002E57C_0 : UnknownGenRoot8002E57C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002E57C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002E57C_1 : UnknownGenObject8002E57C_0 {
 inline ~UnknownGenObject8002E57C_1(){unknown00=lbl_80475B60;}
};
struct UnknownGenObject8002E57C : UnknownGenObject8002E57C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002E57C(){unknown00=lbl_8047236C;}
};
struct UnknownGenObject8002E89C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002E9FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E9FC(){fn_8006665C(this);}
};
struct UnknownGenObject8002E9FC_0 : UnknownGenRoot8002E9FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002E9FC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002E9FC : UnknownGenObject8002E9FC_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002E9FC(){unknown00=lbl_80472460;}
};
extern "C" {
void *igIntMetaField_getMetaCall(){return igIntMetaField_getMeta();}
void fn_8002E440(){
 if(!lbl_805619E4){
  void *object=(lbl_805619E4=fn_8006546C(lbl_805619E0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805619E4));
   reinterpret_cast<short *>(lbl_805619E4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805619E4);
  }
 }
}
void *fn_8002E4D8(){
 if(!lbl_805619E4){
  fn_8002E390();
 }
 return lbl_805619E4;
}
void *fn_8002E508(void *object){
 fn_8002E614();
 return fn_8006546C(lbl_805619E8,object);
}
void *igIntArrayMetaField_getMeta(){
 if(!lbl_805619E8 || !(reinterpret_cast<unsigned int *>(lbl_805619E8)[0x24/4]&4)) fn_8002E614();
 return lbl_805619E8;
}
void *igIntArrayMetaField_vtableRead(){
 UnknownGenObject8002E57C object;
 object.unknown00=lbl_8047236C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E614(){
 fn_80066188((int)igIntArrayMetaField_register);
}
void igIntArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619E8,(int)igIntMetaField_register,(int)igIntArrayMetaField_parentMeta,(int)igIntArrayMetaField_getMetaCall,(int)lbl_8046543C,56,(int)igIntArrayMetaField_vtableRead,(int)igIntArrayMetaField_fieldInit,0,(int)lbl_8055D3CC);
}
void *igIntArrayMetaField_getMetaCall(){return igIntArrayMetaField_getMeta();}
void *igIntArrayMetaField_parentMeta(){return lbl_805619E0;}
void igIntArrayMetaField_fieldInit(){
 void *meta=lbl_805619E8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D3D4,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D3D8,lbl_8055D3DC,lbl_8055D3E0,field);
}
void fn_8002E754(){
 if(!lbl_805619EC){
  void *object=(lbl_805619EC=fn_8006546C(lbl_805619E8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805619EC));
   reinterpret_cast<short *>(lbl_805619EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805619EC);
  }
 }
}
void *fn_8002E7EC(void *object){
 fn_8002E90C();
 return fn_8006546C(lbl_805619F4,object);
}
void *fn_8002E824(){
 if(!lbl_805619F4) lbl_805619F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619F4;
}
void *igInfoList_getMeta(){
 if(!lbl_805619F4 || !(reinterpret_cast<unsigned int *>(lbl_805619F4)[0x24/4]&4)) fn_8002E90C();
 return lbl_805619F4;
}
void *igInfoList_vtableRead(){
 UnknownGenObject8002E89C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475AFC;
 object.unknown00=lbl_80475A98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E90C(){
 fn_80066188((int)igInfoList_register);
}
void igInfoList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619F4,(int)igObjectList_register,(int)fn_80024180,(int)igInfoList_getMetaCall,(int)lbl_80465450,20,(int)igInfoList_vtableRead,0,0,(int)lbl_8055D3E4);
}
void *igInfoList_getMetaCall(){return igInfoList_getMeta();}
void *igInfo_getMeta(){
 if(!lbl_805619F8 || !(reinterpret_cast<unsigned int *>(lbl_805619F8)[0x24/4]&4)) fn_8002EA94();
 return lbl_805619F8;
}
void *igInfo_vtableRead(){
 UnknownGenObject8002E9FC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002EA94(){
 fn_80066188((int)igInfo_register);
}
void igInfo_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619F8,(int)igNamedObject_register,(int)fn_80023CF4,(int)igInfo_getMetaCall,(int)lbl_8055D3F4,20,(int)igInfo_vtableRead,(int)igInfo_fieldInit,0,(int)lbl_8055D3EC);
}
void *igInfo_getMetaCall(){return igInfo_getMeta();}
void igInfo_fieldInit(){
 void *value0=lbl_805619F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D3FC,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800326A0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 fn_800659C0(value0,lbl_8055D404,lbl_8055D40C,lbl_8055D414,value1);
}
void *fn_8002EBEC(void *object){
 fn_8002F178();
 return fn_8006546C(lbl_80561A04,object);
}
void *fn_8002EC24(){
 if(!lbl_80561A04) lbl_80561A04=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561A04;
}
void *igIGBFile_getMeta(){
 if(!lbl_80561A04 || !(reinterpret_cast<unsigned int *>(lbl_80561A04)[0x24/4]&4)) fn_8002F178();
 return lbl_80561A04;
}
}
#pragma pop
