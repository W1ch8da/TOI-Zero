#include <bits/stdc++.h>

struct Item
{
  std::pair<int, double> l;
  std::pair<int, double> r;
  int w = -1;
};

int main()
{
  int n;
  double addW = 0.0;

  std::cin >> n;

  std::vector<Item> items;
  items.reserve(n);

  for (int i = 0; i < n; ++i)
  {
    int l1, r1;
    double l2, r2;
    std::cin >> l1 >> l2 >> r1 >> r2;

    items.push_back({{l1, l2}, {r1, r2}, -1});
  }

  for (int i = n - 1; i >= 0; --i)
  {
    auto &item = items[i];

    int l_type = item.l.first;
    double l_val = item.l.second;
    int r_type = item.r.first;
    double r_val = item.r.second;

    if (l_type == 1 && r_type == 1)
    {
      double diff = std::abs(l_val - r_val);
      addW += diff;
      item.w = 2 * std::max(l_val, r_val);
    }
    else if (l_type != 1 && r_type == 1)
    {
      int index = l_val - 1;
      int prev_w = items[index].w;

      double diff = std::abs(prev_w - r_val);
      addW += diff;

      items[i].w = 2 * std::max(static_cast<double>(prev_w), r_val);
    }
    else if (l_type == 1 && r_type != 1)
    {
      int index = r_val - 1; // r_val = index + 1
      int prev_w = items[index].w;

      double diff = std::abs(l_val - prev_w);
      addW += diff;

      items[i].w = 2 * std::max(l_val, static_cast<double>(prev_w));
    }
    else
    {
      int l_index = l_val - 1;
      int r_index = r_val - 1;

      int l_prev = items[l_index].w;
      int r_prev = items[r_index].w;

      double diff = std::abs(l_prev - r_prev);
      addW += diff;

      items[i].w = 2 * std::max(static_cast<double>(l_prev), static_cast<double>(r_prev));
    }
  }

  if (std::floor(addW) == addW) {
    std::cout << static_cast<int>(addW) << "\n";
  } else {
    std::cout << std::fixed << std::setprecision(1) << addW << "\n";
  }
  return 0;
}

// {'l':(0,2),'r':(0,5),'w':-1}
