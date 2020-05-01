
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

import com.acme.financial.Account;

public class Driver {
	private static EntityManagerFactory factory;

	public static void main(String[] args) {
		factory = Persistence.createEntityManagerFactory("ACME");
		EntityManager em = factory.createEntityManager();
		
	    Account acct = new Account();
	    try {
	      em.getTransaction().begin();
	      ((Account) acct).deposit(250);
	      acct = em.merge(acct);
	      em.getTransaction().commit();
	    } catch (Exception e) {
	    	em.getTransaction().rollback();
	    }
	}
}
