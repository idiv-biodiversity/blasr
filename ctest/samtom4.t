Set up directories
  $ CURDIR=$TESTDIR
  $ REMOTEDIR=/mnt/secondary-siv/secondarytest/testdata/BlasrTestData/ctest
  $ DATDIR=$REMOTEDIR/data
  $ OUTDIR=$CURDIR/out
  $ STDDIR=$REMOTEDIR/stdout

Set up the executable: samtom4.
  $ BIN=$TESTDIR/../pbihdfutils/bin/
  $ EXEC=$BIN/samtom4

#Test samtom4 with a *.sam file generated by blasr from a fofn
  $ OUTFILE=$OUTDIR/lambda_bax.m4
#STDFILE has been generated by blasr -m 4 && sort
  $ STDFILE=$STDDIR/lambda_bax.m4
  $ TMPFILE=test_samtom4_2.tmp

  $ rm -rf $OUTFILE $TMPFILE
  $ $EXEC $DATDIR/lambda_bax.sam $DATDIR/lambda_ref.fasta $TMPFILE 
  $ sort $TMPFILE > $OUTFILE
  $ diff $OUTFILE $STDFILE 

  $ rm $TMPFILE 


#Test samtom4 with a *.sam file generated by blasr with -noSplitSubreads from a fofn
  $ OUTFILE=$OUTDIR/lambda_bax_noSplitSubreads.m4
#STDFILE has been generated by blasr -m 4 && sort 
  $ STDFILE=$STDDIR/lambda_bax_noSplitSubreads.m4
  $ TMPFILE=test_samtom4_3.tmp

  $ rm -rf $OUTFILE $TMPFILE
  $ $EXEC $DATDIR/lambda_bax_noSplitSubreads.sam $DATDIR/lambda_ref.fasta $TMPFILE 
  $ sort $TMPFILE > $OUTFILE
  $ diff $OUTFILE $STDFILE 

  $ rm $TMPFILE 

#Test samtom4 with a *.sam file generated by blasr.
  $ OUTFILE=$OUTDIR/ecoli_samtom4.m4
#STDFILE has been generated by blasr -m 4 && sort
  $ STDFILE=$STDDIR/ecoli_sorted.m4

  $ rm -rf $OUTFILE
  $ $EXEC $DATDIR/ecoli.sam $DATDIR/ecoli_reference.fasta $OUTFILE 
  $ sort $OUTFILE | md5sum 
  0d5ab401d6675424ae90f5d97a243c47  -

  $ sort $STDFILE | md5sum
  0d5ab401d6675424ae90f5d97a243c47  -


