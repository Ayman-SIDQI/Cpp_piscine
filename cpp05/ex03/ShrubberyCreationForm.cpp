/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:56:14 by asidqi            #+#    #+#             */
/*   Updated: 2023/10/17 22:50:31 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137),
	_t(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	AForm(other), _t(other._t)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		_t = other._t;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "TREE DESTROYED!" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	canAccess(executor);
	std::ofstream o(_t + "_shrubbery");
	if (!o.fail())
	{
		o << "                                        #+++.                                                     " << std::endl
		<< "                                 *++++%%+ .:+++++++++#.                                             " << std::endl
		<< "                              .#++---------:::::-----+++++++**.                                     " << std::endl
		<< "                             %++----:::::::::::------=++++++++*                                     " << std::endl
		<< "                             ++------------------------++++++++++%%.                                " << std::endl
		<< "                       .+++%+++--::-----++++++++=+++++++++**+***++++++*.                            " << std::endl
		<< "                      .++++++++--------++++++++++++++*************+++++*.                           " << std::endl
		<< "                      %+++++++++--+++++++++++++++++++***************++++*%                          " << std::endl
		<< "                      %*++++++++++++**+******+++++++++++++++++%***+++++++*%                         " << std::endl
		<< "                     %+%++++********************++++++-#+++++---++++++++**#                         " << std::endl
		<< "                   *+++****+++***++**++++++***+++++-%+-----------++***+*+++#                        " << std::endl
		<< "                   %*++++%**++*+++++***++++++++++++++++-++++++++++********+*%.                      " << std::endl
		<< "                  .**+****#*********%+***++++++++++*+++++++++++*+++++*++++++**                      " << std::endl
		<< "                  .#*++********#%%++-::#%**+++++*+#*************+++++++++++++*-                     " << std::endl
		<< "                 %*%**+++++++++--------++#*********%*+*********+++++-::--+++*.                      " << std::endl
		<< "               .%****%**+++++++++++++++***%#*%%%**#%*++++++++++---:-----++***+                      " << std::endl
		<< "                .%*****%%******+++*****%++*++****#*###*++++++++--+++++++**%%%*                      " << std::endl
		<< "                 %%%****++%%%%****%%%%%%#+*#+#****%+++#%***+**++++*****%%****+                      " << std::endl
		<< "                   +%%%**********=+*****+***=++**#%******+%*#*****%%%%%%%***%.                      " << std::endl
		<< "                    ..%%%%%%%*****=++*%#+**%#+++*%******#=+*##****#***%*#*#%%:                      " << std::endl
		<< "                       %%%*%*.%%%%%=+++++*. #=++*%%%%%#=+++++++*# %%%%%%%%%                         " << std::endl
		<< "                                   .=++++*. #=++*#  =+++++***#=     .. ..                           " << std::endl
		<< "                                    .++++*. #=+++**++++***. .                                       " << std::endl
		<< "                                     .++++- #=++++******.                                           " << std::endl
		<< "                                      *=++* #=++*+****#                                             " << std::endl
		<< "                                       ==++++=++**+***.                                             " << std::endl
		<< "                                        ====+++++*+***                                              " << std::endl
		<< "                                         .*====++*++**                                              " << std::endl
		<< "                                           #====+++***                                              " << std::endl
		<< "                                           *====++**+*.   %    .*                                   " << std::endl
		<< "                                           #===+++****.   %.  +#                                    " << std::endl
		<< "                                  .        :==+=+++++*.   %..+.                                     " << std::endl
		<< "                                 =++==     .==+=+*++**.=  %% :*                                     " << std::endl
		<< "                                   .*.==   #==+++*++**.+. -+-                                       " << std::endl
		<< "                                   =+++    +==++++++**.##. .%                                       " << std::endl
		<< "                                     =.**..=+=++++++***..%*.                                        " << std::endl
		<< "                             :. ..    ...-====+++++++***#.*#+.+*-                                   " << std::endl
		<< "                                .==.  =*.#====+++++*+***##*#-##+-                                   " << std::endl
		<< "                          #::. =+ +:+.++#=*==++=+++*+****.#*#=++-                                   " << std::endl
		<< "                    .+#==-====*---.+*..#=*===++++++++******-+**+#:##..--.:*  *. ..                  " << std::endl
		<< "                 .:=-*=======++--+#--#==**==++++*+++*#******+*+-#---------=+-=#####                 " << std::endl
		<< "               .----++#******++--##++#+**+=+#=++**++++#***##**-#=--##-----+#-----+#.=               " << std::endl
		<< "                 #*++++---=+-----#+=-#*+=*##+##+++#*+++#+#=+:---*++**####*+-----++++.               " << std::endl
		<< "                         ...#+-#+=-#--#*--+----------=+#++-#------------=--++#                      " << std::endl
		<< "                          ++----=-:-=------=++====-----------=+++++++++## .                         " << std::endl
		<< "                           .#++++--------------=++++=--+++                                          " << std::endl
		<< "                                 ..##*+++++++++++++++*#+.                                           " << std::endl;
	}
	o.close();
}