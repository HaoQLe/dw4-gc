#include "unknown8004577C.h"
#pragma push
#pragma auto_inline off
inline void *unknown80045FA4Construct(Unknown800468E8 *entry){return fn_800468E8(entry);}
extern "C" {
unsigned char fn_80045FA4(Unknown800442F8Owner *object,void *value){
 Unknown800469E8 *node=reinterpret_cast<Unknown800469E8 *>(value);
 Unknown800442F8Stream *first=NULL,*second=NULL,*third=NULL;
 int operation=0;
 fn_80045D08(object);
 if(fn_800463E8(object,&third)){
  unknown8004577CCopy(node->unknown0C,third);
  unknown8004577CRelease(third);third=NULL;
 }
 fn_80045D08(object);
 if(*object->unknown34!='{') return 0;
 ++object->unknown34;fn_80045D08(object);
 const char *cursor;
 int c;
 while((c=unknown80045FA4Byte(cursor=object->unknown34))!='}' && static_cast<char>(c)){
  if(!fn_80045DC0(object,&first)) return 0;
  if(!fn_80045EF4(object,&operation)){unknown8004577CRelease(first);first=NULL;return 0;}
  if(!fn_80045E54(object,&second)){unknown8004577CRelease(first);first=NULL;return 0;}
  fn_80045D08(object);
  int index;
  Unknown800442F8Nodes *storage;
  Unknown800468E8 *entry=reinterpret_cast<Unknown800468E8 *>(fn_80056138(sizeof(Unknown800468E8),fn_80068430(object)));
  if(entry) entry=reinterpret_cast<Unknown800468E8 *>(unknown80045FA4Construct(entry));
  unknown8004577CCopy(entry->unknown00,first);
  unknown8004577CCopy(entry->unknown04,second);
  storage=node->unknown08;index=storage->unknown08;
  if(index<storage->unknown0C) storage->unknown08=index+1;else fn_80041660(storage,index+1,4);
  storage->unknown10[index]=reinterpret_cast<Unknown800442F8Node *>(entry);
  unknown8004577CRelease(first);first=NULL;unknown8004577CRelease(second);second=NULL;
 }
 if(static_cast<char>(c)!='}') return 0;
 object->unknown34=cursor+1;return 1;
}
}
#pragma pop
