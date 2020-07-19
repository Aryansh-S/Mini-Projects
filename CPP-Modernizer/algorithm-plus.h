// convenient additions to the algorithm header

template<class T, class Compare> constexpr const T& clamp(const T& v, const T& lo, const T& hi, Compare comp = std::less) {
    assert(!comp(hi, lo));
    return comp(v, lo) ? lo : comp(hi, v) ? hi : v;
}
