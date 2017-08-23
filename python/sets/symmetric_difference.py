n = int(raw_input())
n_array = map(int,raw_input().split())
n_set = set(n_array)
m = int(raw_input())
m_array = map(int,raw_input().split())
m_set = set(m_array)
for i in sorted(n_set.union(m_set).difference(n_set.intersection(m_set))):
    print i
