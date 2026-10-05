#include "unknown8004577C.h"
#pragma push
#pragma auto_inline off
extern "C" {
unsigned char fn_80046254(Unknown800442F8Owner *object,Unknown80046B98 *node){
 int operation=0;Unknown800442F8Stream *value=NULL;
 fn_800463E8(object,&node->unknown18);
 if(!fn_80045EF4(object,&operation)) return 0;
 node->unknown14=operation;
 if(!fn_80045E54(object,&value)) return 0;
 unknown8004577CCopy(node->unknown0C,value);
 unknown8004577CRelease(value);value=NULL;fn_80045D08(object);
 if(*object->unknown34!='{') return 0;
 ++object->unknown34;fn_80045D08(object);
 while(*object->unknown34!='}' && *object->unknown34){
  int index;
  Unknown800442F8Nodes *storage;
  Unknown800442F8Node *entry=fn_8004577C(object);if(!entry) break;
  storage=node->unknown10;index=storage->unknown08;
  if(index<storage->unknown0C) storage->unknown08=index+1;else fn_80041660(storage,index+1,4);
  storage->unknown10[index]=entry;
  fn_80045D08(object);
 }
 if(*object->unknown34!='}') return 0;
 ++object->unknown34;return 1;
}
unsigned char fn_800463E8(Unknown800442F8Owner *object,Unknown800442F8Stream **value){
 fn_80045D08(object);if(*object->unknown34!='(') return 0;
 ++object->unknown34;if(!fn_80045DC0(object,value)) return 0;
 fn_80045D08(object);++object->unknown34;return 1;
}
int fn_80046474(void *,int value){switch(value){case 8:case 10:return 1;case 11:return 2;case 12:return 3;default:return 0;}}
bool fn_800464BC(void *object,int kind,const char *first,int operation,const char *second){
 bool result;
 switch(kind){
 case 1:{
  int a=0,b=0;
  if(sscanf(first,lbl_8055D80C,&a)!=1) return 0;
  if(sscanf(second,lbl_8055D80C,&b)!=1) return 0;
  result=fn_800467C8(object,a,operation,b);
  break;
 }
 case 2:{
  float a=lbl_80566220,b=lbl_80566220;
  if(sscanf(first,lbl_8055D814,&a)!=1) return 0;
  if(sscanf(second,lbl_8055D814,&b)!=1) return 0;
  result=fn_80046828(object,a,operation,b);
  break;
 }
 case 3:{
  unsigned char a=0,b=0;
  Unknown800442F8Reference reference(fn_80024FB4(fn_80068430(object)));
  fn_80071F9C(reference.value,first);
  if(!fn_80072240(reference.value,&a)) return 0;
  fn_80071F9C(reference.value,second);
  if(!fn_80072240(reference.value,&b)) return 0;
  result=fn_8004688C(object,a,operation,b);
  break;
 }
 case 0:default:result=fn_80046718(object,first,operation,second);break;
 }
 return result;
}
bool fn_80046718(void *,const char *first,int operation,const char *second){switch(operation){case 0:return fn_80077768(first,second)==0;case 1:return fn_8007784C(first,second,strlen(second))==0;case 2:return fn_80077768(first,second)!=0;default:return false;}}
bool fn_800467C8(void *,int first,int operation,int second){switch(operation){case 0:return first==second;case 1:return first>=second;case 2:return first!=second;default:return false;}}
bool fn_80046828(void *,double first,int operation,double second){switch(operation){case 0:return first==second;case 1:return first>=second;case 2:return first!=second;default:return false;}}
bool fn_8004688C(void *,unsigned char first,int operation,unsigned char second){switch(operation){case 0:return first==second;case 2:return first!=second;default:return false;}}
void *fn_800468E8(Unknown800468E8 *object){object->unknown08=lbl_80472C30;object->unknown00=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_800607F4(lbl_805621F8)));object->unknown04=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_800607F4(lbl_805621F8)));return object;}
Unknown800468E8 *fn_80046940(Unknown800468E8 *object,int flag){
 if(object){object->unknown08=lbl_80472C30;unknown8004577CRelease(object->unknown00);object->unknown00=NULL;unknown8004577CRelease(object->unknown04);object->unknown04=NULL;if(static_cast<short>(flag)>0) fn_800564E8(object);}
 return object;
}
Unknown800469E8 *fn_800469E8(Unknown800469E8 *object){
 reinterpret_cast<void **>(object)[1]=lbl_80472C3C;object->unknown00=1;reinterpret_cast<void **>(object)[1]=lbl_80472C24;
 void *context;if(lbl_80562298) context=fn_800607F4(lbl_805621E8);else context=fn_800607F4(lbl_80562200);
 object->unknown08=fn_800338FC(context);object->unknown0C=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_800607F4(lbl_805621F8)));return object;
}
Unknown800469E8 *fn_80046A6C(Unknown800469E8 *object,int flag){
 if(object){
  reinterpret_cast<void **>(object)[1]=lbl_80472C24;
  for(int i=0;i<object->unknown08->unknown08;++i){
   delete reinterpret_cast<Unknown800468E8Virtual *>(object->unknown08->unknown10[i]);
   Unknown800442F8Nodes *storage=object->unknown08;
   if(storage->unknown08!=0 && i>=0 && i<storage->unknown08) storage->unknown10[i]=NULL;
  }
  unknown8004577CRelease(reinterpret_cast<Unknown800442F8Stream *>(object->unknown08));object->unknown08=NULL;
  unknown8004577CRelease(object->unknown0C);object->unknown0C=NULL;
  if(object) reinterpret_cast<void **>(object)[1]=lbl_80472C3C;
  if(static_cast<short>(flag)>0) fn_800564E8(object);
 }
 return object;
}
Unknown80046B98 *fn_80046B98(Unknown80046B98 *object,int value){
 reinterpret_cast<void **>(object)[1]=lbl_80472C3C;object->unknown00=0;reinterpret_cast<void **>(object)[1]=lbl_80472C18;
 object->unknown08=value;object->unknown14=0;object->unknown18=NULL;object->unknown0C=reinterpret_cast<Unknown800442F8Stream *>(fn_80024FB4(fn_800607F4(lbl_805621F8)));
 void *context;if(lbl_80562298) context=fn_800607F4(lbl_805621E8);else context=fn_800607F4(lbl_80562200);
 object->unknown10=fn_800338FC(context);return object;
}
Unknown80046B98 *fn_80046C28(Unknown80046B98 *object,int flag){
 if(object){
  reinterpret_cast<void **>(object)[1]=lbl_80472C18;
  unknown8004577CRelease(object->unknown0C);object->unknown0C=NULL;
  if(object->unknown18){unknown8004577CRelease(object->unknown18);object->unknown18=NULL;}
  for(int i=0;i<object->unknown10->unknown08;++i){
   delete object->unknown10->unknown10[i];
   Unknown800442F8Nodes *storage=object->unknown10;
   if(storage->unknown08!=0 && i>=0 && i<storage->unknown08) storage->unknown10[i]=NULL;
  }
  unknown8004577CRelease(reinterpret_cast<Unknown800442F8Stream *>(object->unknown10));object->unknown10=NULL;
  if(object) reinterpret_cast<void **>(object)[1]=lbl_80472C3C;
  if(static_cast<short>(flag)>0) fn_800564E8(object);
 }
 return object;
}
}
#pragma pop
