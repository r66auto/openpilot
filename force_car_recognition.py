filenames = ['/data/params/d/HyundaiCars', '/data/params/d/HondaCars', '/data/params/d/SubaruCars', '/data/params/d/ToyotaCars']

with open('/data/params/d/Cars', 'w') as outfile:
    for names in filenames:
        with open(names) as infile:
            outfile.write(infile.read())
        outfile.write("\n")