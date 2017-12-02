  #include <vector>
  #include <algorithm>
  #include <numeric>
  #include <iterator>
  #include <deque>
  #include <array>

  int main() {

    std::vector<int> v1(10);
    std::fill(std::begin(v1), std::end(v1), 1);
    std::fill_n(std::begin(v1), 6, 2);
    std::iota(std::begin(v1), std::end(v1), 1);

    std::vector<int> v2;
    std::fill_n(std::back_inserter(v2), 6, 2);
    std::generate_n(std::back_inserter(v2), 10, [n = 0]()mutable{ return n++;});

    std::deque<int> q3;
    std::fill_n(std::front_inserter(q3), 6, 2);
    std::generate_n(std::front_inserter(q3), 10, [n= 0]()mutable{ return n++;});


    return 0;
  }