#ifndef _IG_STRINGREF_H_
#define _IG_STRINGREF_H_

#include <igCore/igStringPoolItem.h>

namespace Gap {
    namespace Core {
        //class igStringPool;

        class igStringRef{
            private:
                const igChar* _string;

                inline igBool isPooled() const{ return _string != NULL;}
                inline void release() const { if (isPooled()) getId()->release(); }
        
            public:
                inline igStringRef() : _string(NULL) {}
                // Takes over the reference of a string the pool returned.
                explicit inline igStringRef(const igChar* pooled) : _string(pooled) {}
                inline igStringRef(const igStringRef& that) : _string(that._string)
                {
                    if (isPooled()) getId()->addRef();
                }
                inline const igChar* getString() const { return _string; }
                // Assigns a pooled copy of string (defined with the game's string pool, game/StringPool.h).
                inline igStringRef& operator=(const igChar* string);
            
                inline igStringPoolItemId getId() const
                {
                    return (igStringPoolItemId)(_string-sizeof(igStringPoolItem));
                }

                inline ~igStringRef()
                {
                    release();
                }
        
        
        
        };
    }
}

#endif 
