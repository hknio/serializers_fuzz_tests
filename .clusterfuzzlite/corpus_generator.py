import os
import sys
import subprocess
from glob import glob

path = "/tmp/corpus_generator"
out_path = sys.argv[1]

for generator in glob(path + "/*_corpus_generator"):
    fuzzer = os.path.basename(generator).split('_corpus_generator')[0]
    out_dir = path + "/" + fuzzer
    os.mkdir(out_dir)
    subprocess.call([generator, out_dir])
    zip_path = os.path.join(out_path, fuzzer + "_seed_corpus.zip")
    subprocess.call(['zip', '-r', '-j', zip_path, out_dir])
