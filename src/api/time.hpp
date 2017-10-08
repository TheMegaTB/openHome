//
// Created by themegatb on 5/28/17.
//

#ifndef HoMesh_TIME_HPP
#define HoMesh_TIME_HPP

#define REL_TIME_PROV_T std::shared_ptr<RelativeTimeProvider>

class RelativeTimeProvider {
public:
    virtual long millis()= 0;
};

#ifdef UNIT_TESTING
class DummyRelativeTimeProvider : public RelativeTimeProvider {
    long last = 0;
public:
    inline long millis() { last += 1000; return last; };
};
#endif

#endif //HoMesh_TIME_HPP
