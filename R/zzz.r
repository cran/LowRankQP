
.First.lib <- function(lib, pkg) 
{
    library.dynam("LowRankQP", pkg, lib)
    cat("LowRankQP 1.0 installed\n")
    cat("Copyright J.T. Ormerod & M. P. Wand 2005\n")
}
