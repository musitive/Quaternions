

GLM_FUNC_DECL size_type df::detail::tquat::length() const
{
    return glm::sqrt(w * w + x * x + y * y + z * z);
}

template<typename T>
df::detail::tquat<T>() w(0), x(0), y(0), z(0) {}

template<typename T>
df::detail::tquat<T>(
    T const & w, 
    T const& x, 
    T const& y, 
    T const& z) : w(w), x(x), y(y), z(z) {}