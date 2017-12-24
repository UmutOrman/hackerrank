def make_connections(cities_neighbours, visited_list, interconnections):
    for i in range(len(cities_neighbours)):
        if not(visited_list[i]):
            connections = []
            #print i
            connect(i + 1, cities_neighbours, visited_list, connections)
            interconnections.append(connections)
            i = i - 1
    return interconnections

def connect(city, cities_neighbours, visited_list, connections):
    connections.append(city)
    visited_list[city - 1] = True    
    for neighbour in cities_neighbours[city - 1]:    
        if not(visited_list[neighbour - 1]):            
            connect(neighbour, cities_neighbours, visited_list, connections)

q = int(raw_input().strip())
for a0 in xrange(q):
    cities_neighbours = []
    interconnections = []
    visited_list = []
    n, m, clib, croad = raw_input().strip().split(' ')
    n, m, clib, croad = [int(n), int(m), long(clib), long(croad)]
    for city in xrange(n):
        cities_neighbours.append([])
        visited_list.append(False)
    for a1 in xrange(m):        
        road = map(int,raw_input().strip().split(' '))        
        cities_neighbours[road[0] - 1].append(road[1])
        cities_neighbours[road[1] - 1].append(road[0])
    if(clib <= croad):
        print n*clib   
    else:              
        make_connections(cities_neighbours, visited_list, interconnections)            
        total_cost = 0
        total_cities_rescued = 0
        for connection in interconnections:
            total_cost = total_cost + (len(connection) - 1) * croad + clib
            total_cities_rescued = total_cities_rescued + len(connection)
        total_cost = total_cost + (n - total_cities_rescued) * clib
        print total_cost
